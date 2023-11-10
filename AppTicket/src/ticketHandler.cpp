#include "../include/ticketHandler.hpp"

TicketHandler::TicketHandler()
{
}
void TicketHandler::createTicket(string representativeID, string clientID,string priority,string description)
{
    Ticket* ticket = new Ticket(uuid->createUuid(),representativeID, clientID,priority,description);

    this->ticketStorage.push_back(ticket);

    cout << "\nTicket: " << ticket->getDescription()<<endl;
} 
void TicketHandler::updateStatus(string ticketID)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == ticketID)
        {
            ticket->setState("UPDATED");
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
}

void TicketHandler::sendNotification(string ticketID)
{
    ICommunication* emailCommunication = new EmailCommunication(); 
    ICommunication* chatCommunication = new ChatCommunication(); 

}

void TicketHandler::closeTicket(string ticketID)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == ticketID)
        {
            ticket->setState("CLOSED");
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
} 

void TicketHandler::viewTicket(string ticketID)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == ticketID)
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

void TicketHandler::addIncident(Incident* incident,string ticketID)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == ticketID)
        {
            ticket->setIncident(incident);
        }
        else
        {
            cout << "\nuuid erroneo"<<endl;
        }
    }
}

vector<Ticket*> TicketHandler::graphHandler()
{
    return this->ticketStorage; 
}

TicketHandler::~TicketHandler()
{

}
