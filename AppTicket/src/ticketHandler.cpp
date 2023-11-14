// #include "../include/ticketHandler.hpp"
#include <ticketHandler.hpp>

TicketHandler::TicketHandler()
{
    this->clientHandler = new ClientHandler();
} 
string TicketHandler::createTicket(string representativeID, string clientID,string priority,string description)
{
    Ticket* ticket = new Ticket(UuId::generateUuid(),representativeID, clientID,priority,description);

    this->ticketStorage.push_back(ticket);

    std::cout << "\nTicket creado id: " << ticket->getID()<<std::endl;

    return ticket->getID();
} 
void TicketHandler::updateStatus(string ticketID,string ticketState)
{
    for (Ticket* ticket : this->ticketStorage) 
    {
        if(ticket->getID() == ticketID)
        {
            ticket->setState(ticketState);
        }
        else
        {
            // cout << "\nuuid erroneo: No se pudo actualizar"<<endl;
        }
    }
}

void TicketHandler::sendNotification(string ticketID)
{
    // ICommunication* emailCommunication = new EmailCommunication(); 
    // ICommunication* chatCommunication = new ChatCommunication(); 

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
            // cout << "\nuuid erroneo: No se pudo cerrar ticket"<<endl;
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
            cout << "\nTicket state: " << ticket->getState()<<endl;
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
            std::cout << "---------------------------------------------"<<std::endl;
            ticket->viewIncidents();
            std::cout << "---------------------------------------------"<<std::endl;
        }
        else
        {
            // cout << "\nuuid erroneo: No se puedo agregar incidente"<<endl;
        }
    }
}

TicketHandler::~TicketHandler()
{

}
void TicketHandler::calculateShortestPath()
{
    this->graph->fillAdjList(this->ticketStorage);

    this->graph->getShortestpathByDijkstra(0,5);

    this->graph->printFullPath();
}
void TicketHandler::setGrafo(Graph* graph)
{
    this->graph = graph;
}