#include <iostream>
#include <string>
#include <regex>
using namespace std;

string song;

int main() {
    cin >> song;
    regex r("WUB");
    song = regex_replace(song, r, " ");
    regex re("\\s+");
    song = regex_replace(song, re, " ");
    regex rr("^\\s");
    song  = regex_replace(song, rr, "");
    cout << song << endl;
    return 0;
}