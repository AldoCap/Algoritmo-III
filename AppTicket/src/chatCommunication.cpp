#include <chatCommunication.hpp>

ChatCommunication::ChatCommunication()
{

}

ChatCommunication::~ChatCommunication()
{

}
void ChatCommunication::sendMessage(string message,string target)
{
    this->messages[target] = message;
}
void ChatCommunication::viewMessages(string target)
{
    int count =  0;

    // for (string message : this->messages) 
    // {
    //     count++;
    //     cout << "\nMensage " << count << ": " << message <<endl;
    // }
    std::cout << "Mensage: " << this->messages[target]<<endl;
}