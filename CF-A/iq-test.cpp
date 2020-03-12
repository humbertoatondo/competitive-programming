#include <iostream>
#include <string>
#include <map>
using namespace std;

string l1, l2, l3, l4;
map<char, int> m { {'.', 0}, {'#', 1} };
map<char, int> n { {'.', 0}, {'#', 1} };

int main() {
    cin >> l1 >> l2 >> l3 >> l4;
    int c1 = m[l1[0]] + m[l1[1]] + m[l2[0]] + m[l2[1]];
    int c2 = m[l1[1]] + m[l1[2]] + m[l2[1]] + m[l2[2]];
    int c3 = m[l1[2]] + m[l1[3]] + m[l2[2]] + m[l2[3]];

    int c4 = m[l2[0]] + m[l2[1]] + m[l3[0]] + m[l3[1]];
    int c5 = m[l2[1]] + m[l2[2]] + m[l3[1]] + m[l3[2]];
    int c6 = m[l2[2]] + m[l2[3]] + m[l3[2]] + m[l3[3]];

    int c7 = m[l3[0]] + m[l3[1]] + m[l4[0]] + m[l4[1]];
    int c8 = m[l3[1]] + m[l3[2]] + m[l4[1]] + m[l4[2]];
    int c9 = m[l3[2]] + m[l3[3]] + m[l4[2]] + m[l4[3]];

    int p1 = n[l1[0]] + n[l1[1]] + n[l2[0]] + n[l2[1]];
    int p2 = n[l1[1]] + n[l1[2]] + n[l2[1]] + n[l2[2]];
    int p3 = n[l1[2]] + n[l1[3]] + n[l2[2]] + n[l2[3]];

    int p4 = n[l2[0]] + n[l2[1]] + n[l3[0]] + n[l3[1]];
    int p5 = n[l2[1]] + n[l2[2]] + n[l3[1]] + n[l3[2]];
    int p6 = n[l2[2]] + n[l2[3]] + n[l3[2]] + n[l3[3]];

    int p7 = n[l3[0]] + n[l3[1]] + n[l4[0]] + n[l4[1]];
    int p8 = n[l3[1]] + n[l3[2]] + n[l4[1]] + n[l4[2]];
    int p9 = n[l3[2]] + n[l3[3]] + n[l4[2]] + n[l4[3]];

    int ma = max(c1, max(c2, max(c3, max(c4, max(c5, max(c6, max(c7, max(c8, c9))))))));
    int na = max(p1, max(p2, max(p3, max(p4, max(p5, max(p6, max(p7, max(p8, p9))))))));
    if (ma > 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}