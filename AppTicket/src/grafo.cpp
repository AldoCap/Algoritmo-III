#include <grafo.hpp>

Graph::Graph() 
{
    
}
void Graph::fillAdjList(std::vector<Ticket*> ticketStorage)
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
void Graph::getShortestpathByDijkstra(int start, int V)
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

// Función para imprimir el camino más corto desde el inicio hasta el destino
void Graph::printPath(int destination) 
{
    if (previous[destination] != -1) {
        this->printPath(previous[destination]);
    }
    std::cout << destination << " ";
}
void Graph::printFullPath()     
{
    for (int i = 0; i < 5; ++i) 
    {
        // std::string originClient       = adj[0][0].ticket->getClientID();
        // std::string destinationClient  = adj[i][0].ticket->getClientID();

        // std::string originClientAddress       = clientHandler->readData("2");
        // std::string destinationClientAddress  = clientHandler->readData(destinationClient);
        // clientHandler->readData("2");       
        // " Hacia " << destinationClientAddress <<
        // std::cout << "\nOrigen desde " <<  originClient <<std::endl;
        // std::cout << "\nOrigen desde " <<  originClientAddress <<
        // std::endl;

        std::cout << "\nDistancia minima a " << i << ": " << distances[i] << ", Camino: ";
        this->printPath(i);
        std::cout << std::endl;
    }  
}    