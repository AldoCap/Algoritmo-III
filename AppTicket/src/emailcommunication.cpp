// #include "../include/emailCommunication.hpp"
#include <emailCommunication.hpp>

EmailCommunication::EmailCommunication ()
{
}

EmailCommunication::~EmailCommunication()
{
}

void EmailCommunication::sendMessage(string mensage)
{
    cout << "email enviado"<< mensage << endl;  
}