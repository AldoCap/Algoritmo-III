#include <grafo.hpp>

Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    adjacencyList.resize(numVertices);
}

void Graph::addEdge(int source, int destination, int weight) {
    adjacencyList[source].push_back(make_pair(destination, weight));
    adjacencyList[destination].push_back(make_pair(source, weight));
}

void Graph::findShortestPath(int start) {
    vector<int> distance(numVertices, INF);
    vector<int> parent(numVertices, -1);
    vector<bool> visited(numVertices, false);

    distance[start] = 0;

    for (int i = 0; i < numVertices - 1; i++) {
        int minDistance = INF;
        int u = -1;

        for (int v = 0; v < numVertices; v++) {
            if (!visited[v] && distance[v] < minDistance) {
                minDistance = distance[v];
                u = v;
            }
        }

        if (u == -1) {
            break;
        }

        visited[u] = true;

        for (const auto& edge : adjacencyList[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (!visited[v] && distance[u] != INF && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                parent[v] = u;
            }
        }
    }

    for (int i = 0; i < numVertices; i++) {
        cout << "Shortest distance from " << start << " to " << i << " is: " << distance[i] << endl;
    }
}

vector<int> Graph::getShortestPath(int start, int end) {
    vector<int> shortestPath;
    vector<int> distance(numVertices, INF);
    vector<int> parent(numVertices, -1);
    vector<bool> visited(numVertices, false);

    distance[start] = 0;

    for (int i = 0; i < numVertices - 1; i++) {
        int minDistance = INF;
        int u = -1;

        for (int v = 0; v < numVertices; v++) {
            if (!visited[v] && distance[v] < minDistance) {
                minDistance = distance[v];
                u = v;
            }
        }

        if (u == -1) {
            break;
        }

        visited[u] = true;

        for (const auto& edge : adjacencyList[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (!visited[v] && distance[u] != INF && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                parent[v] = u;
            }
        }
    }

    int currentVertex = end;
    while (currentVertex != -1) {
        shortestPath.push_back(currentVertex);
        currentVertex = parent[currentVertex];
    }

    reverse(shortestPath.begin(), shortestPath.end());

    return shortestPath;
}

const vector<vector<pair<int, int>>> Graph::getAdjacencyList() {
    return adjacencyList;
}