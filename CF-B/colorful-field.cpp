#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

int n, m, k, t, a, b;
set<int> waste;
map<int,string> crops { {1, "Carrots"}, {2, "Kiwis"}, {0, "Grapes"} };

int main() {
    cin >> n >> m >> k >> t;
    while (k--) { cin >> a >> b; waste.insert((m * (a - 1)) + b); }
    while (t--) {
        cin >> a >> b;
        int val = (m * (a - 1)) + b;
        if (waste.find(val) != waste.end()) { cout << "Waste" << endl; }
        else {
            int c = 0;
            for (int el : waste) { if (el > val) break; c++;}
            val = (val - c) % 3;
            cout << crops[val] << endl;
        }
    }

    return 0;
}