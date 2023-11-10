#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <ticket.hpp>
const int MAX = 6;  // Tamaño máximo del grafo

struct Node 
{
    int vertex;  // Vértice vecino
    int weight;  // Peso de la arista
    Ticket* ticket;
};

// Definición de comparador para la cola de prioridad
struct Compare 
{
    bool operator()(const Node& a, const Node& b) 
    {
        return a.weight > b.weight;  // Ordenar por peso ascendente
    }
};

std::vector<Node> adj[MAX];  // Lista de adyacencia
int distances[MAX];           // Distancias mínimas
bool visited[MAX];           // Marcador de nodos visitados
int previous[MAX];           // Vértice previo para reconstrucción de caminos
std::priority_queue<Node, std::vector<Node>, Compare> pq;  // Cola de prioridad

void dijkstra(int start, int V)
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
void fillAdjList(std::vector<Ticket*> ticketStorage)
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
void printPath(int destination) 
{
    if (previous[destination] != -1) {
        printPath(previous[destination]);
    }
    std::cout << destination << " ";
}

// int main() {
//     // Construir el grafo
    
//     // fillAdjList(0,1,10);
//     // fillAdjList(0,3,20);
//     // fillAdjList(1,0,10);
//     // fillAdjList(1,3,20);
//     // fillAdjList(2,3,10);
//     // fillAdjList(3,0,20);
//     // fillAdjList(3,1,20);
//     // fillAdjList(3,2,10);
//     // fillAdjList(4,2,40);
//     // fillAdjList(2,4,40);

//     // Llamar a Dijkstra con el nodo de inicio 0 y el número total de vértices 5
//     dijkstra(0, 5);

//     // Imprimir las distancias mínimas y los caminos más cortos
//     for (int i = 0; i < 5; ++i) 
//     {
//         std::cout << "Distancia minima a " << i << ": " << distances[i] << ", Camino: ";
//         printPath(i);
//         std::cout << std::endl;
//     }
    
//     return 0;
// }
