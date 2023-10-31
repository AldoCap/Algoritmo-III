#ifndef CLIENTHANDLER
#define CLIENTHANDLER
#include <string>
#include <iostream>
#include "./client.hpp"
using namespace std;

class ClientHandler 
{
    public:
        ClientHandler(string name, string surname, string id, string email); 
        string createClient(Client * client); 
        void updateClient(string uuid, string data); 
        void viewClient(string uuid);
        void del(string uuid);
        
        ~ClientHandler(); 
        
    private: 
        string  uuid, data, name, surname, mail; 
        Client * client; 
        int maxLength = 100; 
        string *clientStorage;
};
#endif