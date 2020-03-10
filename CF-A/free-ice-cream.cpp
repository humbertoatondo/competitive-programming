#include <iostream>
using namespace std;

int n;
long long total;
int kids;
char sign;
int d;

int main() {
    cin >> n >> total;
    while (n--) {
        cin >> sign >> d;
        if (sign == '+')
            total += d;
        else{
            if (d > total) {
                kids++;
                continue;
            }
            total -= d;
        }
    }
    cout << total << " " << kids << endl;
    return 0;
}