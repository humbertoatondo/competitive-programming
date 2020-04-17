#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

string sent, received;
vector<string> possible;

void getPossibles(string str, char sign, int missing)
{
    ostringstream oss;
    oss << str << sign;
    if (!missing)
    {
        possible.push_back(oss.str());
        return;
    }
    getPossibles
(oss.str(), '+', missing - 1);
    getPossibles
(oss.str(), '-', missing - 1);
}

int getValue(string s)
{
    int count = 0;
    for (char c : s)
    {
        if (c == '+') count++;
        if (c == '-') count--;
    }
    return count;
}

int getMissing(string s)
{
    int count = 0;
    for (char c : s)
    {
        if (c == '?') count++;
    }
    return count;
}

int main() {
    cin >> sent >> received;
    int missing = getMissing(received);
    int sentVal = getValue(sent);
    int receivedVal = getValue(received);
    if (!missing && sentVal == receivedVal)
    {
        cout << fixed << setprecision(11) << 1.0 << endl;
        return 0;
    }
    getPossibles("", ' ', missing);
    int valid = 0;
    for (string s : possible)
    {
        if (getValue(s) + receivedVal == sentVal) valid++;
    }
    cout << fixed << setprecision(11) << double(valid) / possible.size() << endl;
    return 0;
}