#ifndef CATEGORYHANDLER
#define CATEGORYHANDLER
#include <string>
#include <iostream>
#include <telephoneRepresentativeHandler.hpp>
#include <emailCommunication.hpp>
#include <chatCommunication.hpp>
#include <clientHandler.hpp>
#include <ticket.hpp>
#include <incident.hpp>
#include <uuid.hpp>
#include <vector>

using namespace std;

class TicketHandler
{
    public:
        TicketHandler();  
        void createTicket(string representativeID, string clientID,string priority,string description); 
        void updateStatus(string ticketID); 
        void sendNotification(string ticketID);
        void closeTicket(string ticketID);  
        void viewTicket(string ticketID); 
        void addIncident(Incident* incident,string ticketID); 
        ~TicketHandler(); 
        
    private: 
        TelephoneRepresentativeHandler* telRepreHandler;
        ClientHandler* clientHandler;  
        string representativeId, nameClient,surnameClient,idClient, description; 
        int maxLength = 100; 
        Ticket* ticket;
        vector<Ticket*> ticketStorage;
        UuId* uuid;
};

#endif