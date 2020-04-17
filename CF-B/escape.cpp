#include <iostream>
using namespace std;

int vp, vd, t, f, c;

int main() {
    cin >> vp >> vd >> t >> f >> c;
    int bijous = 0;
    int distp = 0;
    int distd = 0;
    while (distp < c) {
        if (t <= 0) distd += vd;
        distp += vp;
        cout << distp << " " << distd << " | " << bijous << endl;
        if (distd && distp && distd >= distp) {
            bijous++;
            t = f;
            distd = 0;
        }
        t--;
    }
    cout << bijous << endl;
    return 0;
}