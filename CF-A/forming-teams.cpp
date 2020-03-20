#include <iostream>
#include <map>
#include <set>
using namespace std;

int n, m, a, b;
map<int, set<int>> adj_list;
set<int> team1, team2, friendly, kinda_friendly;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        adj_list[i] = set<int>();
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        adj_list[a].insert(b);
        adj_list[b].insert(a);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for (int el : adj_list[i])
        {
            cout << el << " ";
        }
        cout << endl;
        if (adj_list[i].empty())
        {
            friendly.insert(i);
            continue;
        }

        if (adj_list[i].size() == 1)
        {
            kinda_friendly.insert(i);
            continue;
        }

        if (team1.empty())
        {
            team1.insert(i);
            continue;
        }
        else
        {
            bool flag = 0;
            for (int num : adj_list[i])
            {
                if (team1.find(num) != team1.end())
                    flag = 1;
            }
            if (!flag)
            {
                team1.insert(i);
                continue;
            }
        }

        if (team2.empty())
        {
            team2.insert(i);
            continue;
        }
        else
        {
            bool flag = 0;
            for (int num : adj_list[i])
            {
                if (team2.find(num) != team2.end())
                    flag = 1;
            }
            if (!flag)
            {
                team2.insert(i);
                continue;
            }
        }
    }

    cout << team1.size() << " | " << team2.size() << " | " << friendly.size() << " | " << kinda_friendly.size() << endl;
    int res = n - (team1.size() + team2.size() + friendly.size()) / 2 * 2;
    cout << res << endl;

    return 0;
}
/*
68 50
10 9
28 25
53 46
38 32
46 9
35 13
65 21
64 1
15 52
43 52
31 7
61 67
41 49
30 1
14 4
17 44
25 7
24 31
57 51
27 12
3 37
17 11
41 16
65 23
10 2
16 22
40 36
15 51
58 44
61 2
50 30
48 35
45 32
56 59
37 49
62 55
62 11
6 19
34 33
53 66
67 39
47 21
56 40
12 58
4 23
26 42
42 5
60 8
5 63
6 47
*/
