#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set <char> strSet;
string str;

int main() {
    cin >> str;
    for (char& c : str) {
        strSet.insert(c);
    }
    if (strSet.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}