#include <iostream>
using namespace std;
using ll = long long;
int n, m, x, y, k, dx, dy;

int main() {
    cin >> n >> m >> x >> y >> k;
    ll steps = 0;
    while (k--)
    {
        cin >> dx >> dy;
        while (dx && dy) {
            if (x + dx <= n && x + dx > 0 && y + dy <= m && y + dy > 0)
            {
                x += dx;
                y += dy;
                
            } 
        }
    }
    return 0;
}