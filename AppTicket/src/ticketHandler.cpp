#include "../include/ticketHandler.hpp"

TicketHandler::TicketHandler()
{
}
void TicketHandler::createTicket(string ticketID,string representativeID, string clientID,string priority,string description)
{
    Ticket* ticket = new Ticket(ticketID,representativeID, clientID,priority,description);

    this->ticketStorage.push_back(ticket);

    cout << "\nTicket: " << ticket->getDescription()<<endl;
} 
void TicketHandler::updateStatus(string uuid)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == uuid)
        {
            ticket->setState("UPDATED");
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
}

void TicketHandler::sendNotification(string uuid)
{

}

void TicketHandler::closeTicket(string uuid)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == uuid)
        {
            ticket->setState("CLOSED");
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
} 

void TicketHandler::viewTicket(string uuid)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == uuid)
        {
            cout << "\nTicket Description: " << ticket->getDescription()<<endl;
            cout << "\nTicket priority: " << ticket->getPriority()<<endl;
            cout << "\nTicket ID: " << ticket->getID()<<endl;
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
}

void TicketHandler::addIncident(Client* client)
{

}

TicketHandler::~TicketHandler()
{

}
