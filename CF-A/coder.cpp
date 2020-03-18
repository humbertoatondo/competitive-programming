#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    if (n % 2 == 0) 
        cout << n * n / 2 << endl;
    else cout << 1 + (n * n /2) << endl;
    for (int i = 0; i < n; i++) {
        for (int j  = 0; j < n; j++) {
            if (i % 2 == 0 && j % 2 == 0) cout << "C";
            else if (i % 2 == 0 && j % 2 == 1) cout << ".";
            else if (i % 2 == 1 && j % 2 == 0) cout << ".";
            else cout << "C";
        }
        cout << endl;
    }
    return 0;
}