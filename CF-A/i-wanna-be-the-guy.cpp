#include <iostream>
#include <set>
using namespace std;

int n, p, a;
set<int> s;

int main()
{
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        s.insert(a);
    }
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        s.insert(a);
    }

    if (s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}