#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int n, m, x, q;
string row, text;
vector<vector<char>> keyboard;
set<pair<int,int>> shifts;
unordered_map<char,int> occur;

double distance(pair<int,int> p1, pair<int,int> p2) {
    return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
}

int main() {
    cin >> n >> m >> x;
    keyboard.push_back({});
    for (int i = 1; i <= n; i++) {
        cin >> row;
        keyboard.push_back({' '});
        for (int j = 0; j <= m; j++) {
            if (row[j] == 'S') 
            {
                shifts.insert(make_pair(i,j + 1));
                keyboard[i].push_back('-');
            }
            else keyboard[i].push_back(row[j]);
        }
    }

    cin >> q >> text;
    for (auto c : text) occur[c]++;

    int ans = 0;
    unordered_map<char,int>::iterator it = occur.begin();
    for (; it != occur.end(); it++)
    {
        bool match = 0;
        bool exists = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                char c = keyboard[i][j];
                if (it->first == c)
                {
                    match = 1;
                    exists = 1;
                }
                else if (it->first == toupper(c))
                {
                    exists = 1;
                    if (shifts.empty()) { cout << -1 << endl; return 0; }
                    set<pair<int,int>>::iterator shift = shifts.begin();
                    for (; shift != shifts.end(); shift++)
                    {
                        if (distance(*shift, make_pair(i, j)) <= x) match = 1;
                    }
                }
            }
        }
        if ((!match && islower(it->first)) || !exists) { ans = -1; break; }
        else if (!match) ans += it->second;
    }

    cout << ans << endl;
    return 0;
}