/********   All Required Header Files   ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <regex>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <cmath>
#include <fstream>
/********   Debug   ********/
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
/********   For Loops   ********/
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
/********   Short Hands   ********/
#define pb push_back
#define mp make_pair
#define fi first
#define se second
/********   Using   ********/
using namespace std;
/********   Type Defs   ********/
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
/********   Init   ********/
void c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
/***********************************************************/
/************************   Start   ************************/
/***********************************************************/

bool is_reasonable(unordered_map<int, vi> connections)
{
    for (auto it = connections.begin(); it != connections.end(); it++)
    {
        vi vec = it->second;
        int conns = vec.size();
        for (auto key : vec)
        {
            if (conns != connections[key].size())
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    c_p_c();
    int n, m, a, b;
    cin >> n >> m;
    unordered_map<int, vi> connections;

    // Get connections for rows and columns.
    REP (i, m)
    {
        cin >> a >> b;
        connections[a].push_back(b);
        connections[b].push_back(a);
    }

    if (is_reasonable(connections))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    for (auto v : connections)
    {
        cout << v.first << ": ";
        for (int num : v.second)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}