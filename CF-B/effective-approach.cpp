#include <iostream>
#include <vector>
#include <map>
using namespace std;

int n, a, m, b;
vector<int> v;
map<int,pair<int,int>> vals;

int main()
{
    cin >> n;
    for (int i = 1, j = n; i <= n; i++, j--) { cin >> a; vals[a] = make_pair(i, j); }
    cin >> m;
    unsigned long long int comp1 = 0;
    unsigned long long int comp2 = 0;
    while (m--)
    {
        cin >> b;
        comp1 += vals[b].first;
        comp2 += vals[b].second;
    }
    cout << comp1 << " " << comp2 << endl;
    return 0;
}