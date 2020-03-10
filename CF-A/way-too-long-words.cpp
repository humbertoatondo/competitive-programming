#include <iostream>
#include <string>
using namespace std;

int n;
string word;

int main() {
    cin >> n;
    while (n--) {
        cin >> word;
        if (word.size() <= 10) {
            cout << word << endl;
            continue;
        }
        cout << word[0] << word.size() - 2 << word[word.size()-1] << endl;
    }
    return 0;
}