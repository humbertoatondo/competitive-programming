#include <iostream>
#include <iomanip>
#include <set>
using namespace std;

int step, mod;
set<int> s;

int main() {
    while (cin >> step >> mod)
    {
        s.clear();
        int seed = mod;
        for (int i = 0; i < mod; i++)
        {
            seed = (seed + step) % mod;
            s.insert(seed);
        }

        cout << setw(10) << step << setw(10) << mod;
        if (s.size() == mod)
            cout << "    Good Choice\n" << endl;
        else
            cout << "    Bad Choice\n" << endl;
    }
    return 0;
}

/*
3 5
15 20
63923 99999
*/