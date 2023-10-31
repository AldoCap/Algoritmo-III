#include "../include/emailCommunication.hpp"

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