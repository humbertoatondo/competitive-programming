#include <iostream>
#include <vector>
using namespace std;

int n;
char letter;

int main() {
    cin >> n;
    while (n--) {
        vector<vector<int>> grid;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }

        int x = 0;
        int o = 0;
        for (int i = 0; i < 3; i++) {
            grid.push_back({});
            for (int j = 0; j < 3; j++) {
                cin >> letter;
                if (letter == 'X') { x++; }
                if (letter == 'O') { o++; }
                grid[i].push_back(letter);
            }
        }
        if (o > x || abs(x - o) > 1) { cout << "no" << endl; continue; }
        
        // Check winners
        int totalX = 0;
        int totalO = 0;

        // Check rows and columns
        for (int i = 0; i < 3; i++) {
            int rowX = 0;
            int rowO = 0;
            int colX = 0;
            int colO = 0;
            for (int j = 0; j < 3; j++) {
                if (grid[i][j] == 'X') { rowX++; }
                if (grid[i][j] == 'O') { rowO++; }
                if (grid[j][i] == 'X') { colX++; }
                if (grid[j][i] == 'O') { colO++; }
            }
            if (rowX == 3) { totalX++; }
            if (rowO == 3) { totalO++; }
            if (colX == 3) { totalX++; }
            if (colO == 3) { totalO++; }
        }

        // Chgeck diagonals
        int diagX = 0;
        int diagO = 0;
        for (int i = 0; i < 3; i++) {
            if (grid[i][i] == 'X') { diagX++; }
            if (grid[i][i] == 'X') { diagO++; }
        }
        if (diagX == 3) { totalX++; }
        if (diagO == 3) { totalO++; }

        diagX = 0;
        diagO = 0;
        int j = 2;
        for (int i = 0; i < 3; i++) {
            if (grid[i][j - i] == 'X') { diagX++; }
            if (grid[i][j - i] == 'O') { diagO++; }
            j--;
        }

        if (diagX == 3) { totalX++; }
        if (diagO == 3) { totalO++; }

        if (totalX + totalO > 1) { cout << "no" << endl; continue; }
        else { cout << "yes" << endl; }
    }
    return 0;
}

/*
X.O
OO.
XXX

O.X
XX.
OOO

X.O
OO.
XXX

O.X
XX.
OOO
*/