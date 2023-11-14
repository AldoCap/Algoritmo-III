#ifndef EMAILCOMMUNICATION
#define EMAILCOMMUNICATION
#include <iostream>
#include "communication.hpp"
using namespace std;

class EmailCommunication : public ICommunication
{
private:
    map<string,string> messages;
public:
    EmailCommunication();
    ~EmailCommunication();
    void sendMessage(string message,string target);
    void viewMessages(string target);
};
#endif