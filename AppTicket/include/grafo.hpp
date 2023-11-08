#ifndef GRAFO    
#define GRAFO    
#include <iostream>
#include <vector>
#include <ctime>
#include <limits>
#include <cstdlib>
#include <algorithm>

using namespace std;

class Graph {
public:
    Graph(int numVertices);
    void addEdge(int source, int destination, int weight);
    void findShortestPath(int start);
    const vector<vector<pair<int, int>>> getAdjacencyList();
    vector<int> getShortestPath(int start, int end);

private:
    int numVertices;
    vector<vector<pair<int, int>> > adjacencyList;
    const int INF = numeric_limits<int>::max();
};
#endif