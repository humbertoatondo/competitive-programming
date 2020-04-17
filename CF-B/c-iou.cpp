#include <iostream>
#include <vector>
using namespace std;

int n, m, a, b, c;
int matrix[101][101];

int main() {
    cin >> n >> m;
    int total = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        matrix[a][b] += c;
        matrix[b][a] += c;
        total += c * 2;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (matrix[i][j] == 0) continue;
            vector<pair<int,int>> queue {make_pair(i,j)};
            bool hasNeighbors = false;
            while (queue.size())
            {
                pair<int,int> ins = queue.back();
                queue.pop_back();

                if (matrix[ins.first + 1][ins.second]) queue.push_back(make_pair(ins.first + 1,ins.second));
                if (matrix[ins.first][ins.second + 1]) queue.push_back(make_pair(ins.first,ins.second + 1));
                if (matrix[ins.first - 1][ins.second]) queue.push_back(make_pair(ins.first - 1,ins.second));
                if (matrix[ins.first][ins.second - 1]) queue.push_back(make_pair(ins.first,ins.second - 1));

                if (queue.size()) hasNeighbors = true;
                if (hasNeighbors)
                {
                    total -= matrix[ins.first][ins.second];
                    matrix[ins.first][ins.second] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << total / 2 << endl;
    return 0;
}