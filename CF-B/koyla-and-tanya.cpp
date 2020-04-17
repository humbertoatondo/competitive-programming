#include <iostream>
#include <cmath>
using namespace std;
using ull = unsigned long long;
int n;

int main()
{
    cin >> n;
    ull exp = pow(10, 9) + 7;
    ull ans = (pow(3, 3 * n) - pow(7, n));
    ans = ans % exp;
    cout << ans << endl;
    return 0;
}