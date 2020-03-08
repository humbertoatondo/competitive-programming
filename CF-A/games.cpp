#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> teams;
int n;
int h, a;
int t;

int main() {
    cin >> n;
    while (n--) {
        cin >> h >> a;
        teams.push_back(make_pair(h, a));
    }
    for (auto const& p : teams) {
        for (auto const& p2 : teams) {
            if (p.first == p2.second) t++;
        }
    }
    cout << t << endl;
    return 0;
}