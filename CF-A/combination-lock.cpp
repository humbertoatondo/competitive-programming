#include <iostream>
using namespace std;

int n;
string num1, num2;

int main() {
    cin >> n >> num1 >> num2;
    int t = 0;
    for (int i = 0; i < n; i++) {
        t += min(abs(num1[i] - num2[i]), 10 - abs(num1[i] - num2[i]));
    }
    cout << t << endl;
    return 0;
}