#include <iostream>
#include <vector>
#include <set>
using namespace std;

int tc, m, n;
vector<string> v;
string str;
set<char> letters { 'I', 'E', 'H', 'O', 'V', 'A', '#'};

int main()
{
    cin >> tc;
    while (tc--)
    {
        v.clear();
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            cin >> str;
            v.insert(v.begin(), str);
        }

        int pos;
        for (int i = 0; i < n; i++)
            if (v[0][i] == '@') pos = i;

        for (int i = 0; i < m; i++)
        {
            if (i + 1 < m && letters.find(v[i + 1][pos]) != letters.end())
            {
                cout << "forth" << " ";
            }
            else if (pos + 1 < n && letters.find(v[i][pos + 1]) != letters.end())
            {
                cout << "right" << " ";
                pos++;
                if (v[i][pos] != '#')
                    i--;
            }
            else if (pos - 1 >= 0 && letters.find(v[i][pos - 1]) != letters.end())
            {
                cout << "left" << " ";
                pos--;
                if (v[i][pos] != '#')
                    i--;
            }
        }
        cout << endl;
    }

    return 0;
}

/*
2
6 5
PST#T
BTJAS
TYCVM
YEHOF
XIBKU
N@RJB
5 4
JA#X
JVBN
XOHD
DQEM
T@IY
*/