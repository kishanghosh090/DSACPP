#include <iostream>
using namespace std;

const int MAX = 100; // Maximum number of nodes

void dfsUsingMatrix(int startNode, int adjMatrix[][MAX], int V, bool visited[]) {
    int stack[MAX];
    int top = -1;

    stack[++top] = startNode;

    while (top >= 0) {
        int node = stack[top--];

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";

            // Push adjacent unvisited nodes (in reverse for consistent order)
            for (int i = V - 1; i >= 0; --i) {
                if (adjMatrix[node][i] && !visited[i]) {
                    stack[++top] = i;
                }
            }
        }
    }
}

int main() {
    int V = 5; // Number of vertices
    int adjMatrix[MAX][MAX] = {0};

    // Sample undirected graph:
    // 0 - 1, 0 - 2
    // 1 - 3
    // 2 - 4
    adjMatrix[0][1] = adjMatrix[1][0] = 1;
    adjMatrix[0][2] = adjMatrix[2][0] = 1;
    adjMatrix[1][3] = adjMatrix[3][1] = 1;
    adjMatrix[2][4] = adjMatrix[4][2] = 1;

    bool visited[MAX] = {false};

    cout << "DFS traversal starting from node 0:\n";
    dfsUsingMatrix(0, adjMatrix, V, visited);

    return 0;
}
