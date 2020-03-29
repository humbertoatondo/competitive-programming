#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
string inp;
vector<char> decode;

int main()
{
    cin >> n >> inp;
    bool flag = 0;
    if (n % 2 == 0) flag = 1;
    for (char c : inp)
    {
        if (!flag) { decode.push_back(c); }
        else { decode.insert(decode.begin(), c); }
        flag = !flag;
    }
    for (char c : decode) { cout << c; }
    cout << endl;
    return 0;
}