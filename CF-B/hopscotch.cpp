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

int get_row(int a, int y)
{
    return y / a + 1;
}

vector<vector<double>> get_possible_squares_coords(double a, int y)
{
    vector<vector<double>> coords;
    int row = get_row(a, y);
    bool is_double = row % 2 == 0 || row == 1  ? false : true;
    double y_pos = (row - 1) * a;
    if (is_double)
    {
        // xi, yi , xf, yf
        coords.push_back({-a, y_pos, 0, y_pos + a});
        coords.push_back({0, y_pos, a, y_pos + a});
    }
    else
    {
        double x = a / 2.0;
        coords.push_back({-x, y_pos, x, y_pos + a});
    }
    return coords;
}

int result(vector<vector<double>> coords, int square, int x, int y)
{
    if (coords.size() == 2) square--;
    for (auto cor : coords)
    {
        double xi = cor[0];
        double yi = cor[1];
        double xf = cor[2];
        double yf = cor[3];
        if (x > xi && x < xf && y > yi && y < yf)
        {
            return square;
        }
        square++;
    }
    return -1;
}

int main()
{
    c_p_c();
    int a, x, y;
    cin >> a >> x >> y;
    
    // If stone is in the first border then it is not inside any square.
    if (!y)
    {
        cout << -1 << endl;
        return 0;
    }

    // Coordinates of square or squares.
    vector<vector<double>> coords = get_possible_squares_coords(double(a), y);

    // Square number.
    int row = get_row(a, y);
    int odds = (row - 1) / 2;
    int even = row - odds;
    int squares = (odds * 2) + even;
    
    // Solve
    cout << result(coords, squares, x ,y) << endl;

    /* for (auto v : coords)
    {
        for (double cor : v) cout << cor << " ";
        cout << endl;
    } */
    return 0;
}