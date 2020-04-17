#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;

int n, m;

int binomialCoeff(int a, int k)
{
    if (a < k) return 0;
    ull res = 1;
    if (k > a - k) k = a - k;
    for (int i = 0; i < k; i++)
    {
        res *= (a - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    while (cin >> n >> m && (n != 0 || m != 0)) {
        cout << n << " things taken " << m << " at a time is " << binomialCoeff(n, m) << " exactly." << endl;
    }
    return 0;
}

/*
100 things taken 6 at a time is 1192052400 exactly.
100 things taken 6 at a time is 1192052400 exactly.
*/