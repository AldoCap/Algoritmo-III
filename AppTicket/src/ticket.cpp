#include "../include/ticket.hpp"


Ticket::Ticket(string ticketID,string representativeID,string clientID,string priority,string description)
{
    this->uuid =  ticketID;
    this->representativeID =  representativeID;
    this->clientID =  clientID;
    this->priority =  priority;
    this->description =  description;
}
void Ticket::setCategory(string)
{

}
string Ticket::getDescription()
{
    return this->description; 
} 
string Ticket::getID()
{
    return this->uuid; 
} 
void Ticket::closeTicket(string uuid)
{

}
void Ticket::viewStatusTicket(string uuid)
{

}  

void Ticket::setDescription(string)
{

} 

Ticket::~Ticket()
{

} 
