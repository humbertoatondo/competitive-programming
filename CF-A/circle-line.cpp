#include <iostream>
#include <vector>
using namespace std;

int n, d;
vector<int> dist;
int s, t;

int main() {
    cin >> n;
    dist.push_back(0);
    while (n--) {
        cin >> d;
        dist.push_back(d);
    }
    cin >> s >> t;

    int i = s;
    int tp = 0;
    while (i != t) {
        tp += dist[i];
        i++;
        if (i > dist.size() - 1) i = 0;
    }

    i = s - 1;
    int tl = 0;
    while (i != t - 1) {
        tl += dist[i];
        i--;
        if (i < 0) i = dist.size() - 1;
    }
    
    cout << min(tp, tl) << endl;
    return 0;
}