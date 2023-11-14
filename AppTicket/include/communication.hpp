#ifndef COMMUNICATION__
#define COMMUNICATION__
#include <iostream>
using namespace std;
#include <map>
class ICommunication
{
private:

public:
    virtual ~ICommunication(){};
    void virtual sendMessage(string message,string target) = 0;
    void virtual viewMessages(string target) = 0;
};

#endif