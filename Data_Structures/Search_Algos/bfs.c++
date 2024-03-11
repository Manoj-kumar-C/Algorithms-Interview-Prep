#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>>& graph, int start) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int i = 0; i < numVertices; ++i) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    // Example graph representation using adjacency matrix
    vector<vector<int>> graph = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0}
    };

    cout << "BFS traversal starting from vertex 0: ";
    bfs(graph, 0);

    return 0;
}
