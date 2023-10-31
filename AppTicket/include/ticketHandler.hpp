#ifndef CATEGORYHANDLER
#define CATEGORYHANDLER
#include <string>
#include <iostream>
#include <telephoneRepresentativeHandler.hpp>
#include <clientHandler.hpp>
#include <ticket.hpp>
// #include "../include/ticket.hpp"
#include <vector>

using namespace std;

class TicketHandler
{
    public:
        TicketHandler();  
        void createTicket(string ticketID,string representativeID, string clientID,string priority,string description); 
        void updateStatus(string uuid); 
        void sendNotification(string uuid);
        void closeTicket(string uuid);  
        void viewTicket(string uuid); 
        void addIncident(Client* client); 
        ~TicketHandler(); 
        
    private: 
        TelephoneRepresentativeHandler* telRepreHandler;
        ClientHandler* clientHandler;  
        string representativeId, nameClient,surnameClient,idClient, description; 
        int maxLength = 100; 
        Ticket* ticket;
        vector<Ticket*> ticketStorage;
        // vector<string> ticketStorage;
};

#endif