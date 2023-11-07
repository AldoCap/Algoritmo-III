#ifndef GRAFO    
#define GRAFO    
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
    Graph(int numVertices);
    void addEdge(int source, int destination);
    void displayGraph();
    ~Graph(); 

private:
    int numVertices;
    vector<vector<int>> adjacencyList;
};
#endif