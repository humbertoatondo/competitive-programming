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

int periods(vector<int> v)
{
    if (v.size() == 1)
    {
        return 0;
    }
    int per = v[1] - v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] != per)
        {
            return -1;
        }
    }
    return per;
}

int main()
{
    c_p_c();
    map<int,vector<int>> valid;
    int n, a;
    cin >> n;
    REP (i, n)
    {
        cin >> a;
        valid[a].push_back(i);
    }

    vector<pair<int,int>> ans;
    for (auto pa : valid)
    {
        int res = periods(pa.second);
        if (res == -1)
        {
            continue;
        }
        else
        {
            ans.push_back(make_pair(pa.first, res));
        }
    }

    cout << ans.size() << endl;
    for (auto el : ans)
    {
        cout << el.first << " " << el.second << endl;
    }
    return 0;
}