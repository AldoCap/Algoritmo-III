#include <clientHandler.hpp>


ClientHandler::ClientHandler()
{
}

string ClientHandler::createClient(map<string, string> clientData)
{
    Client* client = new Client(UuId::generateUuid(),clientData["name"],clientData["surname"],clientData["email"], clientData["address"]);
    this->clientStorage.push_back(client);

    std::cout << "\nCliente creado id: " << client->getID()<<std::endl;

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
            client->setEmail(clientData["address"]);
        }
        else
        {
            cout << "\nuuid erroneo: No se pudo actualizar cliente"<<endl;
        }
    }
} 

void ClientHandler::readData(string clientID)
{
    for (Client* client : this->clientStorage) 
    {
        if(client->getID() == clientID)
        {
            // cout << "\nClient name: " << client->getName()<<endl;
            // cout << "\nClient surname: " << client->getSurname()<<endl;
            // cout << "\nClient email: " << client->getEmail()<<endl;
            cout << "\nClient address: " << client->getAddress()<<endl;

            // return client->getAddress();
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
