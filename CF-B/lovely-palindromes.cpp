#include <iostream>
#include <string>
using namespace std;

string n;

int main() {
    cin >> n;
    cout << n;
    for (int i = n.length() - 1; i >= 0; i--) { cout << n[i]; }
    cout << endl;
    return 0;
}