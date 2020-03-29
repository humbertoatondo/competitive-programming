#include <iostream>
#include <vector>
using namespace std;

int n, a, energy, cost;
vector<int> v;

int main()
{
    cin >> n;
    v.push_back(0);
    while (n--)
    {
        cin >> a;
        v.push_back(a);
    }

    energy = 0;
    cost = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        energy += v[i] - v[i+1];
        if (energy < 0) {cost -= energy; energy = 0;} 
    }
    cout << cost << endl;
    return 0;
}