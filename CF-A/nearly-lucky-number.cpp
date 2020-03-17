#include <iostream>
#include <regex>
#include <string>
using namespace std;

string num;

int main() {
    cin >> num;
    regex r ("[47]");

    sregex_iterator it(num.begin(), num.end(), r);
    sregex_iterator end;

    int c = 0;
    while (it != end) {
        it++;
        c++;
    }

    if (c > 0 && (c == 4 || c == 7 )) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}