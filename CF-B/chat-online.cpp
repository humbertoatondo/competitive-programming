#include <iostream>
#include <vector>
using namespace std;

int p, q, l, r;
int a, b, c, d;
vector<pair<int,int>> z, x;

int main() {
    cin >> p >> q >> l >> r;
    while (p--) { cin >> a >> b; z.push_back(make_pair(a, b)); }
    while (q--) { cin >> c >> d; x.push_back(make_pair(c, d)); }
    int ans = 0;
    for (int i = l; i <= r; i++) {
        bool flag = 0;
        for (auto pz : z) {
            for (auto px : x) {
                if (px.first + i >= pz.first && px.first + i <= pz.second) {
                    flag = 1;
                    break;
                }
                else if (px.second + i >= pz.first && px.first + i <= pz.second) {
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        if (flag) ans++;
    }
    cout << ans << endl;
    return 0;
}