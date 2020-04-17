#include <iostream>
#include <vector>
using namespace std;

int n, x, y;
pair<int,int> gunPos;
vector<pair<int,int>> troopers;


int main() {
    cin >> n >> x >> y;
    gunPos = make_pair(x, y);
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        troopers.push_back(make_pair(x,y));
    }
    int ans = 0;
    for (int i = 0; i < troopers.size(); i++) {
        for (int j = 1; j < troopers.size(); j++) {
            int left = (troopers[i].first - gunPos.first) * (troopers[j].second - gunPos.second);
            int right = (troopers[j].first - gunPos.first) * (troopers[i].second - gunPos.second);
            if (left == right)
            {
                troopers.erase(troopers.begin() + j);
                j--;
            }
        }
        troopers.erase(troopers.begin());
        i--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}