#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int N, x, M, y, K, z, A, B;

int main() {
    cin >> N;
    int r1 = 0;
    while (N--) { cin >> x; r1 = max(r1, x); }
    cin >> M;
    int p1 = 0;
    while (M--) { cin >> y; p1 = max(p1, y); }
    cin >> K;
    int p2 = INT_MAX;
    while (K--) { cin >> z; p2 = min(p2, z); }
    cin >> A >> B;
    double ans = r1 * sqrt(double(B * p1) / double(A * p2 + B * p1));
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}