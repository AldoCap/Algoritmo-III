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
            ticket->setCategory("UPDATED");
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

} 

void TicketHandler::viewTicket(string uuid)
{

}

void TicketHandler::addIncident(Client* client)
{

}

TicketHandler::~TicketHandler()
{

}
