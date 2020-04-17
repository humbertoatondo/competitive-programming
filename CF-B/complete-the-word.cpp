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

string result(string str)
{
    set<char> letters;
    for (char l = 'A'; l <= 'Z'; l++)
    {
        letters.insert(l);
    }

    for (char c : str)
    {
        if (letters.find(c) != letters.end())
        {
            letters.erase(c);
        }
    }

    for (char& c : str)
    {
        if (c == '?')
        {
            char key = *letters.begin();
            c = key;
            letters.erase(key);
        }
    }
    return str;
}

string fill(string str)
{
    for (char& c : str)
    {
        if (c == '?')
        {
            c = 'A';
        }
    }
    return str;
}

bool is_match(string str)
{
    set<char> letters;
    for (char c : str)
    {
        if (letters.find(c) != letters.end() && c != '?')
        {
            return false;
        }
        letters.insert(c);
    }
    return true;
}

int main()
{
    c_p_c();
    string input;
    cin >> input;

    set<char> letters;
    int left = 0;
    int right = 25;
    while (left + right < input.length())
    {
        if (is_match(input.substr(left, right + 1)))
        {
            cout << fill(input.substr(0, left))
                <<result(input.substr(left, right + 1)) 
                << fill(input.substr(left + right + 1, input.length() - left - right))<< endl;
                return 0;
        }
        left++;
    }
    cout << -1 << endl;
    return 0;
}