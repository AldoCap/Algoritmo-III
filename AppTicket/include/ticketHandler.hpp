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
#include <grafo.hpp>
#include <uuid.hpp>
#include <vector>
#include <sstream>

using namespace std;

class TicketHandler
{
    public:
        TicketHandler();  
        string createTicket(string representativeID, string clientID,string priority,string description); 
        void updateStatus(string ticketID,string ticketState); 
        void sendNotification(string ticketID);
        void closeTicket(string ticketID);  
        void viewTicket(string ticketID); 
        void addIncident(Incident* incident,string ticketID); 
        void calculateShortestPath();
        void setGrafo(Graph* graph);
        ~TicketHandler(); 
        
    private: 
        TelephoneRepresentativeHandler* telRepreHandler;
        ClientHandler* clientHandler;  
        string representativeId, nameClient,surnameClient,idClient, description; 
        int maxLength = 100; 
        Ticket* ticket;
        vector<Ticket*> ticketStorage;
        Graph* graph;
};

#endif