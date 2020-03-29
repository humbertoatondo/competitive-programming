#include <iostream>
#include <vector>
using namespace std;

int n, a;
vector<int> v;

int get_max(int p)
{
    int val = 1;
    for (int i = p + 1; i < v.size() && v[i-1] >= v[i]; i++) { val++; }
    for (int i = p; i && v[i-1] <= v[i]; i--) { val++; }
    return val;
}

int main() 
{
    cin >> n;
    while (n--)
    { 
        cin >> a;
        v.push_back(a);
    }
    int m = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int t = get_max(i);
        if (t > m) { m = t; }
    }
    cout << m << endl;
    return 0;
}