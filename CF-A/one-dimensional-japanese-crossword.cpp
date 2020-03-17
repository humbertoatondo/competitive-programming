#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
string s;
vector<int> v;

int main() {
    cin >> n >> s;
    for (int i = 0; i< n; i++) {
        if (s[i] == 'B') {
            int c = 0;
            while (s[i] == 'B') {
                c++;
                i++;
            }
            v.push_back(c);
        }
    }

    cout << v.size() << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}