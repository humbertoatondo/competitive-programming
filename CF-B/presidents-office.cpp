#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

int n, m;
char c;
string row;
vector<string> office;
unordered_set<char> colors;

int main() {
    cin >> n >> m >> c;
    for (int i = 0; i < n; i++) { cin >> row; office.push_back(row); }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // If president desk is found, search neightbors.
            if (office[i][j] == c) {
                if (i > 0 && office[i - 1][j] != '.' && office[i - 1][j] != c) { colors.insert(office[i - 1][j]); }
                if (j > 0 && office[i][j - 1] != '.' && office[i][j - 1] != c) { colors.insert(office[i][j - 1]); }
                if (i < n - 1 && office[i + 1][j] != '.' && office[i + 1][j] != c) { colors.insert(office[i + 1][j]); }
                if (j < m - 1 && office[i][j + 1] != '.' && office[i][j + 1] != c) { colors.insert(office[i][j + 1]); }
            }
        }
    }
    cout << colors.size() << endl;
    return 0;
}