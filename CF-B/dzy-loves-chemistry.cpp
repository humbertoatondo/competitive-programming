#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
using namespace std;
using ull = unsigned long long;

int n, m, x, y;
map<int,vector<int>> reactions;
set<int> visited;

void dfs(int node)
{
    visited.insert(node);
    if (reactions.find(node) == reactions.end())
    {
        return ;
    }
    for (int num : reactions[node])
    {
        if (visited.find(num) == visited.end()) dfs(num);
    }
}

int main()
{
    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y;
        reactions[x].push_back(y);
        reactions[y].push_back(x);
    }
    int exp = 0;
    for (auto v : reactions) {
        if (visited.find(v.first) == visited.end())
        {
            for (auto el : visited) cout << el << " ";
            cout << endl;
            dfs(v.first);
            exp++;
        }
    }
    cout << exp << endl;

    for (auto m : reactions) {
        cout << m.first << ": ";
        for (auto v : m.second) {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}