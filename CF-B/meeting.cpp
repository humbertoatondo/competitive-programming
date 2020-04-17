#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int xa, ya, xb, yb;
int n, xi, yi, ri;
vector<pair<int,int>> generals;
vector<pair<pair<int,int>,int>> radiators;

double distance(pair<int,int> p1, pair<int,int> p2) {
    return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
}

void getGeneralsPositions() {
    int minx = min(xa, xb);
    int maxx = max(xa, xb);
    for (int i = minx; i <= maxx; i++) {
        generals.push_back(make_pair(i, ya));
        generals.push_back(make_pair(i, yb));
    }
    int miny = min(ya, yb);
    int maxy = max(ya, yb);
    for (int i = miny + 1; i < maxy; i++) {
        generals.push_back(make_pair(xa, i));
        generals.push_back(make_pair(xb, i));
    }
}

int main() {
    cin >> xa >> ya >> xb >> yb;
    getGeneralsPositions();
    cin >> n;
    while (n--)
    {
        cin >> xi >> yi >> ri;
        radiators.push_back(make_pair(make_pair(xi, yi), ri));
    }

    for (auto rad : radiators)
    {
        if (generals.empty()) break;
        for (int i = 0; i < generals.size(); i++)
        {
            if (distance(rad.first, generals[i]) <= rad.second)
            {
                generals.erase(generals.begin() + i);
                i--;
            }
        }
    }
    cout << generals.size() << endl;
    return 0;
}