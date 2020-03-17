#include <iostream>
#include <string>
#include <vector>
using namespace std;

string a, b;
int car;
vector<int> v;

int main() {
    cin >> a >> b;
    for (char& c: a) {
        v.push_back(c);
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;
    return 0;
}