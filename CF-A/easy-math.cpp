#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int tc;
unsigned int n, m, a, d;

int main() {
    cin >> tc;
    while (tc--)
    {
        int total = 0;
        cin >> n >> m >> a >> d;
        for (int i = n; i <= m; i++)
        {
            if (i % a == 0 || i % (a + d) == 0 || i % (a + d * 2) == 0
                || i % (a + d * 3) == 0 || i % (a + d * 4) == 0)
                continue;
                
            total++;
        }
        cout << endl;
        cout << total << endl;
    }
    return 0;
}

/*
3
1 10 2 2
20 100 3 3
100 1000 4 5 
*/