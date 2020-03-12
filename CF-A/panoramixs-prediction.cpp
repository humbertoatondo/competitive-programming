#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> primes;

int main() {
    cin >> n >> m;
    for (int i = 2; i <= 50; i++) {
        if (i != 2 && i % 2 == 0) continue;
        if (i != 3 && i % 3 == 0) continue;
        if (i != 5 && i % 5 == 0) continue;
        if (i != 7 && i % 7 == 0) continue;
        primes.push_back(i);
    }
    
    int k = 0;
    for (k = 0; k < primes.size(); k++) {
        if (primes[k] == n && primes[k+1] == m) {
            cout << "YES" << endl;
            break;
        }
        else if (primes[k] == n && primes[k+1] != m) {
            cout << "NO" << endl;
            break;
        }
    }
    return 0;
}