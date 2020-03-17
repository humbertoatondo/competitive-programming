#include <iostream>
using namespace std;

int n;
int f;

int main() {
    cin >> n;
    int p = 1;
    int o;
    for (int w = 0; w < n / 2; w++) {
        int i;
        o = (n - p) / 2;
        for (i = 0; i < o; i++) {
            cout << "*";
        }
        for (int l = 0; l < p; l++, i++) {
            cout << "D";
        }
        for (; i < n; i++) {
            cout << "*";
        }
        cout << endl;
        p += 2;
    }

    for (int w = 0; w <= n / 2; w++)
    {
        int i;
        int o = (n - p) / 2;
        for (i = 0; i < o; i++) {
            cout << "*";
        }
        for (int l = 0; l < p; l++, i++)
        {
            cout << "D";
        }
        for (; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
        p -= 2;
    }

    return 0;
}