#include <iostream>
#include <string>
#include <vector>
using namespace std;

int tc, n;
string line;
vector<string> v;

int main() {
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        v.clear();
        cin >> n;
        for (int l = 0; l < n; l++)
        {
            cin >> line;
            v.push_back(line);
        }

        int alive = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == 'x')
                {
                    alive++;
                    v[i][j] = '.';
                    if (i + 1 < n && (v[i + 1][j] == 'x' || v[i + 1][j] == '@'))
                    {
                        int tmp = i + 1;
                        do
                        {
                            v[tmp][j] = '.';
                            tmp++;
                        } while (tmp < n && (v[tmp][j] == 'x' || v[tmp][j] == '@'));
                    }

                    if (j + 1 < n && (v[i][j + 1] == 'x' || v[i][j + 1] == '@'))
                    {
                        int tmp = j + 1;
                        do
                        {
                            v[i][tmp] = '.';
                            tmp++;
                        } while (tmp < n && (v[i][tmp] == 'x' || v[i][tmp] == '@'));
                    }
                }
        
                
            }
        }

        cout << "Case " << t << ": " << alive << endl;
    }
    return 0;
}

/*
2
4
x...
..x.
@.@.
....
2
..
x.
*/