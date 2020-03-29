#include <iostream>
#include <map>
using namespace std;

int n, m, a, b;
map<int,int> matches;

int main()
{
    cin >> n >> m;
    while (m--)
    {
        cin >> a >> b;
        if (matches.find(b) == matches.end()) { matches.insert(make_pair(b, a)); }
        else { matches[b] += a; }
    }

    int c = 0;
    map<int,int>::reverse_iterator it;
    for (it = matches.rbegin(); it != matches.rend(); it++)
    {
        if (n >= it->second) { c += it->first * it -> second; n -= it->second; }
        else if (n < it->second) { c += (n) * it->first; n = 0;}
        if (!n) { break; }
    }
    cout << c << endl;
    return 0;
}