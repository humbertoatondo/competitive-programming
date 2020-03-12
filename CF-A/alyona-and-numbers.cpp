#include <iostream>
using namespace std;

int n, m;

int main()
{
    cin >> n >> m;
    long long c = 0;
    for (int i = 1; i <= n; i++)
    {
        c += (m + (i % 5)) / 5;
    }
    cout << c << endl;
    return 0;
}