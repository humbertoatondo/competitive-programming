#include <iostream>
#include <vector>
using namespace std;

int a, b, c;
vector<int> nums;

int main() {
    cin >> a >> b >> c;
    nums = {a, b, c};
    for (int x : nums) {
        for (int y : nums) {
            for (int z : nums) {
                cout << x << " " << y << " " << x << endl;
            }
        }
    }
    return 0;
}