#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int n, m;
bool is_white;

int main() {
    while (cin >> n >> m >> is_white)
    {
        if (!n && !m && !is_white) break;
        
        int horizontal = n - 7;
        int vertical = m - 7;

        int res = horizontal * vertical;
        if (res % 2 == 1)
            res += is_white;
        res /= 2;
        cout << res << endl;
    }
    return 0;
}

/*
8 8 0
8 8 1
9 9 1
40000 39999 0
*/