#include "userInput.hpp"
#include "ConnectionManager.hpp"
#include "MessageDeserializer.hpp"
#include <signal.h>
#include <tclap/CmdLine.h>

void ctrlCSignal(int s){
  std::cout << "\"quit\" to exit the program\n$> " << std::endl;
  google::protobuf::ShutdownProtobufLibrary();
}

void handleSignal()
{
  struct sigaction sigIntHandler;
  sigIntHandler.sa_handler = ctrlCSignal;
  sigemptyset(&sigIntHandler.sa_mask);
  sigIntHandler.sa_flags = 0;
  sigaction(SIGINT, &sigIntHandler, NULL);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
int main(const int argc, const char **argv)
{

//   Make sure that an IP is provided
  TCLAP::CmdLine cmd("Spider CLI", ' ', "v0.1");
  TCLAP::UnlabeledValueArg<std::string> clientIp("server", "Endpoint you want to connect to.", true, "", "server");

  cmd.add(clientIp);
  cmd.parse(argc, argv);
    ConnectionManager connection(clientIp.getValue());

  InputCenter input;
    while(true) {
        auto enveloppe = input.readUserInput(clientIp.getValue());
        auto response = connection.SendRequest(enveloppe);
        if (response.clientid().size() < 16)
            continue;
        MessageDeserializer::PrintResponse(response);
    }

  google::protobuf::ShutdownProtobufLibrary();
  return EXIT_SUCCESS;
}
#pragma clang diagnostic pop
