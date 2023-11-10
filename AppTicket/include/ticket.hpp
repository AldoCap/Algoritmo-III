#ifndef TICKET__
#define TICKET__
#include <string>
#include <iostream>
#include <incident.hpp>
#include <vector>
using namespace std;

class Ticket 
{
    public:
        Ticket(string ticketID,string representativeID,string clientID,string priority,string description);
        Ticket();   
        void setState(string); 
        string getDescription(); 
        void closeTicket(string uuid);
        void viewStatusTicket(string uuid);  
        void setDescription(string); 
        string getPriority();
        string getID();
        string getState();
        string getClientID();
        void setIncident(Incident* incident);
        ~Ticket(); 
        
    private: 
        string representativeID, nameClient, 
            surnameClient,clientID,priority, description,uuid,state; 
        vector<Incident*> incidents;
};

#endif