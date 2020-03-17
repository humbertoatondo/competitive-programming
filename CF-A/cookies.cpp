#include <iostream>
#include <vector>
using namespace std;

int n, a, t;
vector<int> v;

int main() {
    cin >> n;
    t = 0;
    while (n--) {
        cin >> a;
        t += a;
        v.push_back(a);
    }
    int c = 0;
    for (int num : v) {
        if (t % 2 == 0 && num % 2 == 0) c++;
        else if (t % 2 != 0 && num % 2 != 0) c++;
    }

    cout << c << endl;

    return 0;
}