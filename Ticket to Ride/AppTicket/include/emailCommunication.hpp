#ifndef EMAILCOMMUNICATION
#define EMAILCOMMUNICATION
#include <iostream>
#include "communication.hpp"
using namespace std;

class EmailCommunication : public ICommunication
{
private:
    
public:
    EmailCommunication();
    ~EmailCommunication();
    void sendMessage(string);
};
#endif