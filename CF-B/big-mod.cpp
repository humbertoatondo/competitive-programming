#include <iostream>
#include <cmath>
using namespace std;

long long int b, p, m;


int main()
{
    while (cin >> b >> p >> m)
    {
        unsigned long long int res =  1;
        b %= m;
        while (p > 0)
        {
            if (p & 1) { res = res * b % m; }
        b = b * b % m;
        p >>= 1;
        }
        cout << res << endl;
    }
    return 0;
}

/*
3
18132
17

17
1765
3

2374859
3029382
36123
*/