#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string str;
int letters;
int pos;
int moves;

int main() {
    pos = 'a';
    letters = 26;
    cin >> str;
    for (char& c : str) {
        int dist1 = abs(c - pos);
        int dist2 = abs(letters - dist1);
        moves += min(dist1, dist2);
        pos = c;
    }
    cout << moves << endl;
    return 0;
}