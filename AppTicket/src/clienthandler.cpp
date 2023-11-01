#include <clientHandler.hpp>


ClientHandler::ClientHandler()
{
}

string ClientHandler::createClient(map<string, string> clientData)
{
    Client* client = new Client(this->uuid->createUuid(),clientData["name"],clientData["surname"],clientData["email"]);
    this->clientStorage.push_back(client);

    return client->getID();
}
void ClientHandler::updateClient(string clientID, map<string, string> clientData)
{
    for (Client* client : this->clientStorage) 
    {
        if(client->getID() == clientID)
        {
            client->setName(clientData["name"]);
            client->setSurname(clientData["surname"]);
            client->setEmail(clientData["email"]);
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
} 

void ClientHandler::readData(string clientID)
{
    for (Client* client : this->clientStorage) 
    {
        if(client->getID() == clientID)
        {
            cout << "\nClient name: " << client->getName()<<endl;
            cout << "\nClient surname: " << client->getSurname()<<endl;
            cout << "\nClient email: " << client->getEmail()<<endl;
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
}

void ClientHandler::deleteClient(string clientID)
{
    for (auto it = this->clientStorage.begin(); it != this->clientStorage.end(); /* no incrementar aquí */) 
    {
        if ((*it)->getID() == clientID) 
        {
            // Elimina el cliente encontrado
            it = this->clientStorage.erase(it);
            break; // Importante romper el bucle una vez eliminado
        }
    }
}
        
ClientHandler::~ClientHandler()
{

} 
