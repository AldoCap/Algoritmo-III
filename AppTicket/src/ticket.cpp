#include "../include/ticket.hpp"

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
void Ticket::closeTicket(string uuid)
{
    cout <<"Ticket numero: " << uuid << "  Se cerro con exito" << endl;  
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
Ticket::~Ticket()
{

} 
