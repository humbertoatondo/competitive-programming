#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ull = unsigned long long;

int N, v, M, type, l, r;
vector<ull> V, U, costs;

int main() {
    cin >> N;
    V.push_back(0);
    costs.push_back(0);
    while (N--)
    {
        cin >> v;
        V.push_back(V.back() + v);
        costs.push_back(v);
    }

    sort(costs.begin(), costs.end());
    U.push_back(0);
    for (int i = 1; i < costs.size(); i++) { U.push_back(U.back() + costs[i]); }
    cin >> M;
    while (M--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << V[r] - V[l - 1] << endl;
        }
        else
        {
            cout << U[r] - U[l - 1] << endl;
        }
    }
    return 0;
}