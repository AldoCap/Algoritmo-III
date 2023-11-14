// #include "../include/emailCommunication.hpp"
#include <emailCommunication.hpp>

EmailCommunication::EmailCommunication ()
{
}

EmailCommunication::~EmailCommunication()
{
}
void EmailCommunication::sendMessage(string message,string target)
{
    this->messages[target] = message;
}
void EmailCommunication::viewMessages(string target)
{
    int count =  0;

    // for (string message : this->messages) 
    // {
    //     count++;
    //     cout << "\nMensage " << count << ": " << message <<endl;
    // }
    std::cout << "Mensage: " << this->messages[target]<<endl;
}