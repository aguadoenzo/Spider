//
// Created by hippolyteb on 11/8/16.
//

#ifndef SPIDER_SERVER_ZEROMQSOCKET_HPP
#define SPIDER_SERVER_ZEROMQSOCKET_HPP

#include "../../Includes/ZeroMQ/zmq.hpp"
#include <zmq.h>

class ZeroMQSocket : public ISpiderSocket {
public:
    std::unique_ptr<zmq::socket_t> _socket;

    ZeroMQSocket() : ISpiderSocket() {
        _socket = std::unique_ptr<zmq::socket_t>(new zmq::socket_t(*ISpiderServer::Context, ZMQ_ROUTER));
        _socket->setsockopt(ZMQ_ROUTER_HANDOVER, 1); //configure handover. New connection will take precedence over old ones in case of collision.
    }

    virtual std::string &GetSocketID() override {
        return ISpiderSocket::GetSocketID();
    }

    virtual void SetSocketID(const std::string &id) override {
        ISpiderSocket::SetSocketID(id);
    }

    const std::string GetSocketImplementationIdentity() override {
        return "ZeroMQ";
    }

    virtual void Send(const std::string &clientId, const std::string &payload) override final {
        zmq::multipart_t rep;
        rep.addstr(clientId);
        rep.addstr(payload);
        try {
            rep.send(*_socket, 0);
        }
        catch (std::exception ex) {
            std::cout << "ZeroMQ error :" << ex.what() << std::endl;
        }
    }

    virtual std::string Receive() override final {
        zmq::message_t msg;
        _socket->recv(&msg);
        std::string ret = std::string(static_cast<char*>(msg.data()), msg.size());
        return ret;
    }

    virtual void Connect(const std::string &address) override final {
        _socket->connect(address);
    }

    virtual void Bind(const std::string &address) override final {
        _socket->bind(address);
    }

    virtual bool ShouldAccept() override final {
        return false;
    }

    virtual std::unique_ptr<ISpiderSocket> Accept() override final {
        return nullptr;
    }

    virtual void *GetNativeSocket() override final {
        return _socket.get();
    }

    virtual void Disconnect() override {
        _socket->close();
    }
};

#endif //SPIDER_SERVER_ZEROMQSOCKET_HPP
