#include <iostream>
using namespace std;

int n;
int c;
int i;
int t;

int main() {
    cin >> n;
    while (n--) {
        cin >> i;
        if (i < 0) {
            if (c) c--;
            else t++;
        }
        else c += i;
    }
    cout << t << endl;
    return 0;
}