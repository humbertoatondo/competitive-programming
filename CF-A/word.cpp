#include <iostream>
#include <string>
using namespace std;

string str;
int lower, upper;

int main() {
    cin >> str;
    for (char& c : str) {
        if (islower(c)) lower++;
        else upper++;
    }
    for (char& c : str) {
        if (lower >= upper) c= tolower(c);
        else c = toupper(c);
    }
    cout << str << endl;
    return 0;
}