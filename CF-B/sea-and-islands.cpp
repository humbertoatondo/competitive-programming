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

bool islands_exist(int n, int islands)
{
    int even = n / 2;
    int odd = n - even;
    return (even * even) + (odd * odd) >= islands;
}

vector<string> get_map(int n, int islands)
{
    vector<string> res;
    bool is_odd = true;
    REP(i, n)
    {
        bool is_island = is_odd;
        string row = "";
        REP(j, n)
        {
            if (is_island && islands > 0)
            {
                row += 'L';
                islands--;
            }
            else
            {
                row += 'S';
            }
            is_island = !is_island;
        }
        is_odd = !is_odd;
        res.push_back(row);
    }
    return res;
}

int main()
{
    c_p_c();
    int n, k;
    cin >> n >> k;
    // Return if k greater than the possible number of islands.
    if (!islands_exist(n, k))
    {
        cout << "NO" << endl;
        return 0;
    }

    vector<string> islands_map = get_map(n, k);
    cout << "YES" << endl;
    for (string row : islands_map)
    {
        cout << row << endl;
    }
    return 0;
}