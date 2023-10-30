#ifndef CHATCOMMUNICATION
#define CHATCOMMUNICATION
#include "communication.hpp"
using namespace std;

class ChatCommunication : public ICommunication
{
private:
    
public:
    ChatCommunication();
    ~ChatCommunication();
    void sendMessage(string);
};
#endif