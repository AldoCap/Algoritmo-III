#include <grafo.hpp>

Graph::Graph() 
{
    
}
void Graph::init() 
{
    for (int i = 0; i <= V; ++i) {
        this.distanc[i] = 1 << 30;
        this.visited[i] = false;
        this.previous[i] = -1;
    }
}

void Graph::relaxation(int current, int adyacente, int weight) {
    if (distanc[current] + weight < distanc[adyacente]) {
        distanc[adyacente] = distanc[current] + weight;
        previous[adyacente] = current;
        Q.push(Node(adyacente, distanc[adyacente]));
    }
}

void Graph::dijkstra() {
    int initial = 0; 
    Graph::init();
    Q.push(Node(initial, 0));
    distanc[initial] = 0;

    while (!Q.empty()) {
        int current = Q.top().first;
        Q.pop();

        if (visited[current]) continue;

        visited[current] = true;

        for (int i = 0; i < ady[current].size(); ++i) {
            int adyacente = ady[current][i].first;
            int peso = ady[current][i].second;

            if (!visited[adyacente]) {
                relaxation(current, adyacente, peso);
            }
        }
    }
}

void Graph::print(int destino) {
    if (previous[destino] != -1) {
        print(previous[destino]);
    }
    printf("%d ", destino);
}

void Graph::printGraph()
{
    srand(static_cast<unsigned>(time(0))); 

    for (int i = 1; i < node.size(); ++i) {
        int weight = rand() % 10 + 1; 
        ady[0].push_back(Node(i, weight));
    }

    this->dijkstra();

    cout << "Distancias más cortas desde el vértice 0:\n";
    for (int i = 0; i < node.size(); ++i) {
        cout << "Vertice " << i << ": " << distanc[i] << "\tCamino: ";
        print(i);
        cout << endl;
    }
}