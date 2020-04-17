#include <iostream>
#include <string>
using namespace std;

string text;

int main() {
    cin >> text;
    int total = 0;
    int lim = 0;
    if (text.length() < 4) { cout << 0 << endl; return 0; }
    for (int i = 0; i < text.length() - 3; i++) {
        if (text.substr(i, 4) == "bear") 
        {
            total += (text.length() - (i + 3)) * ((i + 1) - lim);
            lim = i + 1;
        }
    }
    cout << total << endl;
    return 0;
}