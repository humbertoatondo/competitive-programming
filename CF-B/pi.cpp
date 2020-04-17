#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int n, ai;
vector<int> nums;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    while (cin >> n && n) {
        for (int i = 0; i < n; i++) { cin >> ai; nums.push_back(ai); }
        int one = 0;
        int total = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(nums[i], nums[j]) == 1) { one++; }
                total++;
            }
        }
        if (!one) { cout << "No estimate for this data set." << endl; }
        else {
            double ans = sqrt(6.0 * total / one);
            cout  << fixed << setprecision(6) << ans << endl;
        }
        nums.clear();
    }
    return 0;
}

/*
5
2
3
4
5
6

2
13
39

0
*/