#ifndef CHATCOMMUNICATION
#define CHATCOMMUNICATION
#include "communication.hpp"
using namespace std;

class ChatCommunication : public ICommunication
{
private:
    map<string,string> messages;
public:
    ChatCommunication();
    ~ChatCommunication();
    void viewMessages(string target);
    void sendMessage(string message,string target);
};
#endif