#include "../include/clientHandler.hpp"


ClientHandler::ClientHandler(string name, string surname, string id, string email)
{
    clientStorage = new string [maxLength];
}

string ClientHandler::createClient(Client * client)
{

}
void ClientHandler::updateClient(string uuid, string data)
{

} 

void ClientHandler::viewClient(string uuid)
{

}

void ClientHandler::del(string uuid)
{

}
        
ClientHandler::~ClientHandler()
{

} 
