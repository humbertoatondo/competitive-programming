#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string bits;
unsigned long long int num;

int main() {
    cin >> bits;
    for (char c : bits) {
        num = (num << 1) | (c - '0');
    }
    cout << num << endl;
    int exp = 0;
    int t = 0;
    int res;
    while (1) {
        if (pow(4, exp) < num)
            t++;
        else break;
        exp++;
    }
    cout << t << endl;
    return 0;
}