#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(vector<vector<int>>& graph, int start) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    stack<int> s;

    s.push(start);

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (!visited[current]) {
            cout << current << " ";
            visited[current] = true;
        }

        for (int i = numVertices - 1; i >= 0; --i) {
            if (graph[current][i] == 1 && !visited[i]) {
                s.push(i);
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

    cout << "DFS traversal starting from vertex 0: ";
    dfs(graph, 0);

    return 0;
}
