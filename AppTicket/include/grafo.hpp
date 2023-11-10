#ifndef GRAFO    
#define GRAFO    
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <cstdlib>
#include <ctime>
#include <ticketHandler.hpp>
TicketHandler* ticketHandler; 

using namespace std;

class Graph {
public:
    Graph();
    void init(); 
    void relaxation(int, int, int); 
    void dijkstra(); 
    void print(int); 
    void printGraph(); 

private:
    #define MAX 10005
    typedef pair<int, int> Node;
    vector<Node> ady[MAX];

    struct cmp {
    bool operator()(const Node& left, const Node& right) {
        return left.second > right.second;
    }
};
    int distanc[MAX];
    bool visited[MAX];
    int previous[MAX];
    priority_queue<Node, vector<Node>, cmp> Q;
    vector<Ticket*> node = ticketHandler->graphHandler();
    

};
#endif