#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n, num;
string dirs;
vector<int> v;

int main() {
    cin >> n >> dirs;
    while (n--) {
        cin >> num;
        v.push_back(num);
    }
    int flag = 0;
    int r = 0;
    int l = 0;
    int dist = 0;
    for(int i = 0; i < v.size(); i++) {
        if (dirs[i] == 'R') {
            flag = 1;
            r = v[i];
        } else if (flag) {
            l = v[i];
            if (dist == 0 || (l - r) / 2 < dist) {
                dist = (l - r) / 2;
            }
        }
    }

    if (!dist) {
        cout << -1 << endl;
        return 0;
    }
    cout << dist<< endl;
    return 0;
}