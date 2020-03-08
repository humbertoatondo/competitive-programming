#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int a;
vector<int> v;

int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int& i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}