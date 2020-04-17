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

void fill_top_students(vi& student_points, int k, int r, int s_k)
{
    int top_val = r * k;
    while (top_val > s_k)
    {
        top_val -= k;
    }
    int remaining = s_k - top_val;

    fill(student_points.begin(), student_points.begin() + k, top_val / k);
    REP (i, s_k - top_val)
    {
        student_points[i]++;
    }
}

void fill_remaining_students(vi& student_points, int s_all, int s_k, int n, int k)
{
    if (n - k <= 0) return;
    int points = s_all - s_k;
    int points_per_student = points / (n - k);
    fill(student_points.begin() + k, student_points.end(), points_per_student);
    int remaining_points = points - (points_per_student * (n - k));
    REP(i, remaining_points)
    {
        student_points[k + i]++;
    }
}

int main()
{
    c_p_c();
    int n, k, l, r, s_all, s_k;
    cin >> n >> k >> l >> r >> s_all >> s_k;

    // Students
    vi student_points(n);

    // Top students.
    fill_top_students(student_points, k , r, s_k);

    // Fill remaning students.
    fill_remaining_students(student_points, s_all, s_k, n, k);

    for (int points : student_points) cout << points << " ";
    cout << endl;
    return 0;
}