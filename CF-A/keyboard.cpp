#include <iostream>
#include <string>
using namespace std;

string str = "qwertyuiopasdfghjkl;zxcvbnm,./ ";
string input;
char dir;
int sign;

int main() {
    cin >> dir >> input;
    if (dir == 'R') sign = -1;
    else sign = 1;
    for (char& c : input) {
        int i;
        for (i = 0; c != str[i]; i++);
        cout <<  str[i + sign];
    }
    cout << endl;
    return 0;
}