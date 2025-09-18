/*
#include <iostream>
#include <vector>
using namespace std;
class Edge {
public:
    int src;
    int dest;
    Edge(int s, int d) {
        src = s;
        dest = d;
    }
};
void createGraph(vector<Edge> graph[], int V) {
    for (int i = 0; i < V; i++) {
        graph[i] = vector<Edge>();
    }
    graph[0].push_back(Edge(0, 2));

    graph[1].push_back(Edge(1, 2));
    graph[1].push_back(Edge(1, 3));

    graph[2].push_back(Edge(2, 0));
    graph[2].push_back(Edge(2, 1));
    graph[2].push_back(Edge(2, 3));

    graph[3].push_back(Edge(3, 1));
    graph[3].push_back(Edge(3, 2));
}
int main() {
    int V = 4;
    vector<Edge> graph[V];
    createGraph(graph, V);
    for (int i = 0; i < graph[2].size(); i++) {
        Edge e = graph[2][i];
        cout << e.dest << " ";
    }
    return 0;
}*/











#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int src, dest;
    Edge(int s, int d) : src(s), dest(d) {}
};

void createGraph(vector<Edge> graph[]) {
    graph[0].emplace_back(0, 2);

    graph[1].emplace_back(1, 2);
    graph[1].emplace_back(1, 3);

    graph[2].emplace_back(2, 0);
    graph[2].emplace_back(2, 1);
    graph[2].emplace_back(2, 3);

    graph[3].emplace_back(3, 1);
    graph[3].emplace_back(3, 2);
}

int main() {
    const int V = 4;
    vector<Edge> graph[V];
    createGraph(graph);
    for (int i = 0; i < graph[2].size(); i++) {
        Edge e = graph[2][i];
        cout << e.dest << " ";
    }
    return 0;
}
