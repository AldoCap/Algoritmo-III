#ifndef CATEGORYHANDLER
#define CATEGORYHANDLER
#include <string>
#include <iostream>
#include <telephoneRepresentativeHandler.hpp>
#include <emailCommunication.hpp>
#include <chatCommunication.hpp>
#include <clientHandler.hpp>
#include <ticket.hpp>
#include <incident.hpp>
#include <uuid.hpp>
#include <vector>
#include <sstream>

//_---------------------------------

#include <queue>
#include <limits>
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

using namespace std;

class TicketHandler
{
    public:
        TicketHandler();  
        void createTicket(string id,string representativeID, string clientID,string priority,string description); 
        void updateStatus(string ticketID); 
        void sendNotification(string ticketID);
        void closeTicket(string ticketID);  
        void viewTicket(string ticketID); 
        void addIncident(Incident* incident,string ticketID); 
        void calculateShortestPath();
        void getShortestpathByDijkstra(int start, int V);
        void fillAdjList(std::vector<Ticket*> ticketStorage);
        void printPath(int);
        ~TicketHandler(); 
        
    private: 
        TelephoneRepresentativeHandler* telRepreHandler;
        ClientHandler* clientHandler;  
        string representativeId, nameClient,surnameClient,idClient, description; 
        int maxLength = 100; 
        Ticket* ticket;
        vector<Ticket*> ticketStorage;
        // UuId* uuid;


        //------------------------------------
        std::vector<Node> adj[MAX];  // Lista de adyacencia
        int distances[MAX];           // Distancias mínimas
        bool visited[MAX];           // Marcador de nodos visitados
        int previous[MAX];           // Vértice previo para reconstrucción de caminos
        std::priority_queue<Node, std::vector<Node>, Compare> pq;  // Cola de prioridad
};

#endif