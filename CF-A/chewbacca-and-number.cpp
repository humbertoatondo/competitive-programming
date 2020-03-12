#include <iostream>
#include <string>
using namespace std;

string num;

int main()
{
    cin >> num;
    int cou = 0;
    for (char &c : num)
    {
        char letter = '0' + '9' - c;
        if (c == '9' && cou == 0 ) {
            c = '9';
        }
        else if (c > '4')
        {
            c = letter;
        }
        cou++;
    }
    cout << num << endl;
    return 0;
}