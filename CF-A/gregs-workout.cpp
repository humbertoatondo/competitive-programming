#include <iostream>
using namespace std;

int n, chest, biceps, back, a;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (i % 3 == 1) chest += a;
        else if (i % 3 == 2) biceps += a;
        else back += a;
    }
    if (chest > biceps && chest > back) cout << "chest" << endl;
    else if (biceps > chest && biceps > back) cout << "biceps" << endl;
    else cout << "back" << endl;
    return 0;
}