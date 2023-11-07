#include <grafo.hpp>

class Graph {
public:
    Graph(int numVertices);
    void addEdge(int source, int destination);
    void displayGraph();

private:
    int numVertices;
    vector<vector<int>> adjacencyList;
};

Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    adjacencyList.resize(numVertices);
}

void Graph::addEdge(int source, int destination) {
    adjacencyList[source].push_back(destination);
    adjacencyList[destination].push_back(source);
}

void Graph::displayGraph() {
    for (int i = 0; i < numVertices; i++) {
        cout << "Vertices adjacent to vertex " << i << ": ";
        for (int v : adjacencyList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}