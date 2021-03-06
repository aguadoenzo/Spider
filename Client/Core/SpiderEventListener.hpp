#ifndef SPIDER_SERVER_SPIDEREVENTLISTENER_HPP
#define SPIDER_SERVER_SPIDEREVENTLISTENER_HPP

#include <thread>
#include <zmq.h>

template<class TPayload>
class SpiderEventListener : public ISpiderEventListener<TPayload> {
private:
	std::function<void(std::string clientId, TPayload &)> _onMessage;
	std::unique_ptr<std::thread> _eventListenerThread;
	std::shared_ptr<zmq::socket_t> _socketSUB = std::make_shared<zmq::socket_t>(*ISpiderDeamon::Context, ZMQ_SUB);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
	static void RunReceive(zmq::socket_t *socketSub, std::function<void(std::string clientId, TPayload &)> *onMessage, bool shouldUnpack = false) {
		while (true) {
			zmq::message_t msg;
			socketSub->recv(&msg);
			socketSub->recv(&msg);
			std::string rpl = std::string(static_cast<char*>(msg.data()), msg.size());
			SpiderEnveloppe enveloppe;
			if (!enveloppe.ParseFromString(rpl))
				continue;
			TPayload payload;
			enveloppe.payload().UnpackTo(&payload);
			(*onMessage)(enveloppe.clientid(), payload);
		}
	}
#pragma clang diagnostic pop

public:
	virtual void Register(std::string payloadType, std::function<void(std::string clientId, TPayload &)> onMessage) override final {
		_socketSUB->setsockopt(ZMQ_SUBSCRIBE, payloadType.c_str(), payloadType.size());
		_onMessage = onMessage;
		_eventListenerThread = std::make_unique<std::thread>(RunReceive, _socketSUB.get(), &_onMessage, true);
	}

	virtual void RegisterNoUnpack(std::string payloadType, std::function<void(std::string clientId, TPayload &)> onMessage) override final {
		_socketSUB->setsockopt(ZMQ_SUBSCRIBE, payloadType.c_str(), payloadType.size());
		_onMessage = onMessage;
		_eventListenerThread = std::make_unique<std::thread>(RunReceive, _socketSUB.get(), &_onMessage, false);
	}

	SpiderEventListener() {
		_socketSUB->connect("inproc://EventEmitter");
	}
};

#endif //SPIDER_SERVER_SPIDEREVENTLISTENER_HPP
