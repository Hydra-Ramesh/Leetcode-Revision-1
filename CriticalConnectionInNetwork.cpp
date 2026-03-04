#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> graph;
    vector<int> disc;
    vector<int> low;
    vector<vector<int>> bridges;
    int timer = 0;

    void dfs(int node, int parent) {
        disc[node] = low[node] = timer++;
        
        for (int neighbor : graph[node]) {
            if (neighbor == parent)
                continue;

            if (disc[neighbor] == -1) {
                // Tree edge
                dfs(neighbor, node);

                low[node] = min(low[node], low[neighbor]);

                // Bridge condition
                if (low[neighbor] > disc[node]) {
                    bridges.push_back({node, neighbor});
                }
            } else {
                // Back edge
                low[node] = min(low[node], disc[neighbor]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        graph.assign(n, vector<int>());
        disc.assign(n, -1);
        low.assign(n, -1);
        bridges.clear();
        timer = 0;

        // Build adjacency list
        for (auto &edge : connections) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        // In case graph is disconnected
        for (int i = 0; i < n; i++) {
            if (disc[i] == -1) {
                dfs(i, -1);
            }
        }

        return bridges;
    }
};

int main() {
    int n, m;
    
    cout << "Enter number of nodes and number of connections: ";
    cin >> n >> m;

    vector<vector<int>> connections(m, vector<int>(2));

    cout << "Enter each connection (u v):\n";
    for (int i = 0; i < m; i++) {
        cin >> connections[i][0] >> connections[i][1];
    }

    Solution sol;
    vector<vector<int>> result = sol.criticalConnections(n, connections);

    cout << "\nCritical Connections (Bridges):\n";
    for (auto &edge : result) {
        cout << edge[0] << " " << edge[1] << endl;
    }

    return 0;
}