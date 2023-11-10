// #include "../include/ticketHandler.hpp"
#include <ticketHandler.hpp>

TicketHandler::TicketHandler()
{
    this->clientHandler = new ClientHandler();
}
void TicketHandler::createTicket(string id,string representativeID, string clientID,string priority,string description)
{
    Ticket* ticket = new Ticket(id,representativeID, clientID,priority,description);

    this->ticketStorage.push_back(ticket);

    std::cout << "\nTicket creado id: " << ticket->getID()<<std::endl;

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
            cout << "\nuuid erroneo: No se pudo actualizar"<<endl;
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
            cout << "\nuuid erroneo: No se pudo cerrar ticket"<<endl;
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
            cout << "\nuuid erroneo: No se pudo ver ticket"<<endl;
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
            cout << "\nuuid erroneo: No se puedo agregar incidente"<<endl;
        }
    }
}

TicketHandler::~TicketHandler()
{

}
void TicketHandler::calculateShortestPath()
{
    this->fillAdjList(this->ticketStorage);

    this->getShortestpathByDijkstra(0,5);


    for (int i = 0; i < 5; ++i) 
    {
        // std::string originClient       = adj[0][0].ticket->getClientID();
        std::string destinationClient  = adj[i][0].ticket->getClientID();

        // std::string originClientAddress       = clientHandler->readData("2");
        // std::string destinationClientAddress  = clientHandler->readData(destinationClient);
        clientHandler->readData("2");       
        // " Hacia " << destinationClientAddress <<
        // std::cout << "\nOrigen desde " <<  originClient <<std::endl;
        // std::cout << "\nOrigen desde " <<  originClientAddress <<
        // std::endl;

        std::cout << "\nDistancia minima a " << i << ": " << distances[i] << ", Camino: ";
        this->printPath(i);
        std::cout << std::endl;
    }    
}
void TicketHandler::getShortestpathByDijkstra(int start, int V)
{
    
    // Inicialización
    for (int i = 0; i < V; ++i) 
    {
        distances[i] = std::numeric_limits<int>::max();  // Infinito inicialmente
        visited[i]  = false;
        previous[i] = -1;  // Sin vértice previo
    }

    distances[start] = 0;  // La distancia al inicio es 0
    pq.push({start, 0});

    while (!pq.empty())
    {
        int u = pq.top().vertex;
        pq.pop();

        if (visited[u])
        {
            continue;  // Si ya se visitó este nodo, no lo proceses de nuevo
        }

        visited[u] = true;

        for (const Node& neighbor : adj[u])
        {
            int v = neighbor.vertex;
            int weightUV = neighbor.weight;

            if (!visited[v] && distances[u] + weightUV < distances[v]) {
                distances[v] = distances[u] + weightUV;
                previous[v] = u;
                pq.push({v, distances[v]});
            }
        }
    }
}
// void fillAdjList(int origin,int destination,int weight)
// {
//     adj[origin].push_back({destination, weight});
// }
void TicketHandler::fillAdjList(std::vector<Ticket*> ticketStorage)
{    
    adj[0].push_back({1, 10,ticketStorage[1]});
    adj[0].push_back({3, 20,ticketStorage[3]});
    adj[1].push_back({0, 10,ticketStorage[0]});
    adj[1].push_back({3, 20,ticketStorage[3]});
    adj[2].push_back({3, 10,ticketStorage[3]});
    adj[3].push_back({0, 20,ticketStorage[0]});
    adj[3].push_back({1, 20,ticketStorage[1]});
    adj[3].push_back({2, 20,ticketStorage[2]});
    adj[4].push_back({2, 40,ticketStorage[2]});
    adj[2].push_back({4, 40,ticketStorage[4]});
}
// Función para imprimir el camino más corto desde el inicio hasta el destino
void TicketHandler::printPath(int destination) 
{
    if (previous[destination] != -1) {
        this->printPath(previous[destination]);
    }
    std::cout << destination << " ";
}
