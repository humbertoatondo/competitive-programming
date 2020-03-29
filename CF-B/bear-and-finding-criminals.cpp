#include <iostream>
#include <vector>
using namespace std;

int n, a, t;
vector<int> v;

int main()
{
    cin >> n>> a;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    int c = 0;
    if (v[a-1]) { c++; }
    int s = max(a, n - a);
    for (int i = 1; i <= s; i++)
    {
        int plus = (a - 1) + i;
        int less = (a - 1)- i;
        if (plus < v.size() && less >= 0 && v[plus] && v[less]) { c+=2; }
        else if (plus < v.size() && less < 0 && v[plus]) { c++; }
        else if (plus >= v.size() && less >= 0 && v[less]) { c++; }
    }
    cout << c << endl;
    return 0;
}