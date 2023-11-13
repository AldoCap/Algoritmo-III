#ifndef CLIENTHANDLER
#define CLIENTHANDLER
#include <string>
#include <iostream>
#include <client.hpp>
#include <communication.hpp>
#include <map>
#include <vector>
#include <uuid.hpp>

using namespace std;

class ClientHandler 
{
    public:
        ClientHandler(); 
        string createClient(map<string, string> clientData); 
        void updateClient(string uuid,map<string, string> clientData); 
        void readData(string uuid);
        void deleteClient(string uuid);
        
        ~ClientHandler(); 
        
    private: 
        string  data, name, surname, mail; 
        // UuId* uuid;
        int maxLength = 100; 
        vector<Client*> clientStorage;
};
#endif