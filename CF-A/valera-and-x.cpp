#include <iostream>
#include <set>
using namespace std;

int n;
string row;
set<char> letters;
int flag;

int main() {
    cin >> n;
    int s = 0;
    int e = n-1;
    for (int i = 0; i < n; i++) {
        cin >> row;
        if (row[s] != row[e]) flag = 1;
        for (int a = 0; a < n; a++) {
            if (a != s && a != e)
                letters.insert(row[a]);
        }
        s++;
        e--;
    }
    if (letters.size() == 1 && !flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}