#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n, vi, m, type, l, r;
vector<long long int> v, cost;
multiset<long long int> ms;

int main()
{
    cin >> n;
    cost.push_back(0);
    while (n--)
    {
        cin >> vi;
        v.push_back(vi);
        cost.push_back(cost.back() + vi);
        auto loc = ms.insert(vi);
        cout << *loc << endl;
    }

    cin >> m;
    while (m--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            long long int t = cost[r] - cost[l - 1];
            cout << t<< endl;
        }
        else
        {
            long long int t = 0;
            multiset<long long int>::iterator it = ms.begin();
            l--;
            advance(it, l);
            while (l < r)
            {
                t += *it;
                it++;
                l++;
            }
            cout << t << endl;
        }
    }
    return 0;
}