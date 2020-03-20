#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int n, total;
vector<string> v;
string s;
queue<pair<int,int>> q;
vector<int> x_vec {0, 0, -1, 1, -1, 1, -1, 1};
vector<int> y_vec {-1, 1, 0, 0, 1, -1, -1, 1};

void bfs(int x, int y)
{
    q.push(make_pair(x, y));
    while (q.size()) {
        pair<int,int> p = q.front();
        for (int i = 0; i < x_vec.size(); i++)
        {
            if (p.first + x_vec[i] >= 0 && p.first + x_vec[i] < n
                && p.second + y_vec[i] >= 0 && p.second + y_vec[i] < n
                && v[p.first + x_vec[i]][p.second + y_vec[i]] == '1')
            {
                q.push(make_pair(p.first + x_vec[i], p.second + y_vec[i]));
            }
        }
        v[p.first][p.second] = '0';
        q.pop();
    }
}

int main()
{
    for (int counter = 1; cin >> n; counter++)
    {
        v.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }

        total = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == '1')
                {
                    total++;
                    bfs(i, j);
                }
            }
        }
        cout << "Image number " << counter << " contains " << total << " war eagles." << endl;
    }
    return 0;
}

/*
6
100100
001010
000000
110000
111000
010100

8
01100101
01000001
00011000
00000010
11000011
10100010
10000001
01100000
*/