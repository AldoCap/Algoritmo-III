#include <iostream>
using namespace std;

class ICommunication
{
private:
   
public:
    virtual ~ICommunication(){};
    void virtual sendMessage(string) = 0;
};