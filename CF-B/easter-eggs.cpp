#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int n;
string colors = "ROYGBIV";
ostringstream eggs;

int main()
{
    cin >> n;
    for (int i = 0; eggs.str().length() < n; i++)
    {
        char l = colors[i % 7];
        if (n - i < 4)
        {
            if (eggs.str().find(l) < 3) { continue; }
        }
        eggs << l;
    }
    cout << eggs.str() << endl;
    return 0;
}