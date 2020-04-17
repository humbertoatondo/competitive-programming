#include <iostream>
#include <vector>
using namespace std;

int n, m, a, b;
vector<vector<int>> adj_matrix; // Adjacency matrix for undirected graph
vector<int> connections;

int main() {
    cin >> n >> m;
    // Fill adjacency matrix with empty values, in this case 0.
    // First row and column are left empty to facilitate things.
    // So first row and first column start on index 1.
    /// We also fill connections vector to know how many connections each person has.
    connections.push_back(0);
    adj_matrix.push_back({});
    for (int i = 1; i <= n; i++) {
        connections.push_back(0);
        adj_matrix.push_back({0});
        for (int j = 1; j <= n; j++) {
            adj_matrix[i].push_back(0);
        }
    }

    // Fill adjacency matrix with corresponding nodes.
    // Get number of connections the i-th person has.
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj_matrix[a][b] = 1;
        adj_matrix[b][a] = 1;
        connections[a]++;
        connections[b]++;
    }

    // Because we can only reprimend persons with just one connection
    // we look in the connections vector to group and kick all this persons.
    // Once this is done we need to recaclculate our connections in the 
    // adjacency matrix and in our connections vectro.
    // We repeat this process until there are no more 1's in connections vector.
    int ans = 0;
    while (true) {
        int key = 0;
        for (int i = 1; i <= n; i++) {
            if (connections[i] == 1) {
                key = 1;
                for (int j = 1; j <= n; j++) {
                    adj_matrix[i][j] = 0;
                    adj_matrix[j][i] = 0;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            connections[i] = 0; // Delete previous connections
            for (int j = 1; j <= n; j++) {
                // Count connections for the i-th person.
                connections[i] += adj_matrix[i][j];
            }
        }
        if (key) { ans++; }
        else { break; }
    }

    cout << ans << endl;
    return 0;
}