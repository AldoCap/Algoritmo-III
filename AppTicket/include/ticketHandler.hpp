#ifndef CATEGORYHANDLER
#define CATEGORYHANDLER
#include <string>
#include <iostream>
#include "./telephoneRepresentativeHandler.hpp"
#include "./client.hpp"

using namespace std;

class TicketHandler
{
    public:
        TicketHandler();  
        void createTicket( TelephoneRepresentativeHandler* telephoneRepresentativeHandler,
                            Client* client, string, string); 
        string updateStatus(string uuid); 
        void sendNotification(string uuid);
        void closeTicket(string uuid);  
        void viewTicket(string uuid); 
        void addIncident(Client* client); 
        ~TicketHandler(); 
        
    private: 
        TelephoneRepresentativeHandler* telephoneRepresentativeHandler;
        string representativeId, nameClient,surnameClient,idClient, description; 
        Client* client;  
        int maxLength = 100; 
        string *ticketStorage; 
};

#endif