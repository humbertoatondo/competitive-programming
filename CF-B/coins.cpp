#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

string s;
set<int> check;
map<char,int> m { {'A', 0}, {'B', 0}, {'C', 0} };

void solve(char a, char b, char op)
{
    if (op == '>') { m[a]++; }
    else { m[b]++; }
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        solve(s[0], s[2], s[1]);
    }
    for (pair<char,int> p : m) { check.insert(p.second); }
    if (check.size() < 3) {cout << "Impossible" << endl; }
    else
    {
        map<char,int>::iterator it;
        for (int i = 0; i < 3; i++)
        {   
            it = m.begin();
            while (it->second != i) it++;
            cout << it->first;
        }
        cout << endl;
    }
    
    return 0;
}