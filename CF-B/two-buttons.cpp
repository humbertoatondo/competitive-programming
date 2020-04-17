#include <iostream>
using namespace std;
using lli = long long int;

lli n, m;

int main()
{
    cin >> n >> m;
    int moves = 0;
    while (m != n)
    {
        if (m > n)
        {
            if (m % 2 == 0)
            {
                m /= 2;
                moves++;
            }
            else
            {
                m++;
                m /= 2;
                moves += 2;
            }
        }
        else
        {
            m++;
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}