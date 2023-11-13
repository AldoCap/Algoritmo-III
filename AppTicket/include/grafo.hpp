#ifndef GRAFO    
#define GRAFO    
#include <iostream>
#include <vector>
#include <functional>
#include <cstdlib>
#include <ctime>
#include <queue>
#include <limits>
#include <ticket.hpp>

using namespace std;
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

class Graph 
{
public:
    Graph();
    void fillAdjList(std::vector<Ticket*> ticketStorage);
    void getShortestpathByDijkstra(int start, int V);
    void printPath(int);
    void printFullPath();


private:
        std::vector<Node> adj[MAX];  // Lista de adyacencia
        int distances[MAX];           // Distancias mínimas
        bool visited[MAX];           // Marcador de nodos visitados
        int previous[MAX];           // Vértice previo para reconstrucción de caminos
        std::priority_queue<Node, std::vector<Node>, Compare> pq;  // Cola de prioridad
};
#endif