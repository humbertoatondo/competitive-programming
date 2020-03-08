#include <iostream>
using namespace std;

int n;
char c;
int a, d;

int main() {
    cin >> n;
    while (n--) {
        cin >> c;
        if (c == 'A') a++;
        else d++;
    }
    if (a > d) cout << "Anton" << endl;
    else if (d > a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;
}