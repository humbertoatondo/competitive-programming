#include <iostream>
#include <vector>
using namespace std;

int n, a;
vector<int> v;
vector<int> out;

int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        v.push_back(a);
        out.push_back(0);
    }
    for (int& i :v) {
        out[i] = v[i-1];
    }
    cout <<endl;
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << " ";
    }
    cout << endl;
    return 0;
}