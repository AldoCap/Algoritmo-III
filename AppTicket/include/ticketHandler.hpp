#ifndef CATEGORYHANDLER
#define CATEGORYHANDLER
#include <string>
#include <iostream>
#include <telephoneRepresentativeHandler.hpp>
#include <communication.hpp>
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
        void sendNotification(string message,string ticketID);
        void closeTicket(string ticketID);  
        void setCommunicator(ICommunication* communicator);
        void viewTicket(string ticketID); 
        void addIncident(Incident* incident,string ticketID); 
        void calculateShortestPath();
        void setGrafo(Graph* graph);
        ~TicketHandler(); 
        
    private: 
        TelephoneRepresentativeHandler* telRepreHandler;
        ICommunication* communicator;
        ClientHandler* clientHandler;  
        string representativeId, nameClient,surnameClient,idClient, description; 
        int maxLength = 100; 
        Ticket* ticket;
        vector<Ticket*> ticketStorage;
        Graph* graph;
};

#endif