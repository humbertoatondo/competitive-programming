#include <iostream>
#include <vector>
using namespace std;

int n, a;
vector<int> v;
vector<int>::iterator it;
int serja, dima;
int flag;

int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        v.push_back(a);
    }
    while (!v.empty()) {
        int l;
        if (v.front() > v.back()) {
            it = v.begin();
            l = v.front();
            v.erase(it);
        }
        else {
            l = v.back();
            v.pop_back();
        }
        if (!flag) serja += l;
        else dima += l;
        flag = !flag;
    }
    cout << serja << " " << dima << endl;
    return 0;
}