#include<iostream>
using namespace std;
using ull = unsigned long long;
int n, a, b, x;

int main()
{
    cin >> n >> a >> b;
    while (n--)
    {
        cin >> x;
        ull tmp = (x % b) * a;
        cout << tmp << " ";
    }
    cout << endl;
    return 0;
}

/*
6 135360 718513035
261734062 421419051 929068779 456630559 26088475 278428467
*/