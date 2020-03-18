#include <iostream>
#include <vector>
using namespace std;

int n, p;
vector<int> v, vo;

int main() {
    cin >> n;
    v.push_back(0);
    vo.push_back(0);
    while (n--) {
        cin >> p;
        v.push_back(p);
        vo.push_back(0);
    }

    for (int i = 0; i < v.size(); i++) {
        vo[v[i]] = i;
    }


    for (int i = 1; i < vo.size(); i++) {
        cout << vo[i] <<  " ";
    }
    cout << endl;
    return 0;
}