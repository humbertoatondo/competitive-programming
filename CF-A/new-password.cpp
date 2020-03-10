#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<char> v;

int main() {
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        v.push_back(i + 97);
    }
    for (int i = 0; i < n; i++) {
        cout << v[i%k];
    }
    cout << endl;
    return 0;
}