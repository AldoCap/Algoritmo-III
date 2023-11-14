#include <ticket.hpp>
// #include "../include/ticket.hpp"

Ticket::Ticket(string ticketID,string representativeID,string clientID,string priority,string description)
{
    this->uuid =  ticketID;
    this->representativeID =  representativeID;
    this->clientID =  clientID;
    this->priority =  priority;
    this->description =  description;
}
Ticket::Ticket(){}

void Ticket::setState(string state)
{
    this->state = state;
}
string Ticket::getDescription()
{
    return this->description; 
} 
string Ticket::getPriority()
{
    return this->priority; 
} 
string Ticket::getID()
{
    return this->uuid; 
} 
string Ticket::getState()
{
    return this->state; 
} 
string Ticket::getClientID()
{
    return this->clientID; 
} 
void Ticket::closeTicket()
{
    this->setState("closed"); 
}
void Ticket::viewStatusTicket(string uuid)
{
}  

void Ticket::setDescription(string)
{

} 
void Ticket::setIncident(Incident* incident)
{
    this->incidents.push_back(incident);
}

void Ticket::viewIncidents()
{
    for (Incident* incident : this->incidents) 
    {
            cout << "\nIncident ID: " << incident->getID()<<endl;
            cout << "\nIncident state: " << incident->getCategory()<<endl;
            cout << "\nIncident description: " << incident->getDescription()<<endl;
    }
}
Ticket::~Ticket()
{

} 
