#include <iostream>
#include <string>
using namespace std;

string n;
long long int sum;

int main() 
{
    cin >> n;
    int c = 0;
    if (n.length() > 1) { c++; }
    for (char d : n) { sum += d - '0'; }
    
    while (sum > 9)
    {
        int new_sum = 0;
        while (sum) { new_sum += sum % 10; sum /= 10; }
        sum = new_sum;
        c++;
    }
    cout << c << endl;
    return 0;
}