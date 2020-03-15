#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void step(int* x, int* y, string msg) {
    (*x)--;
    (*y)--;
    cout << msg << '-' << endl;
};
int main() {
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    if (a + h + f + c != e + d + b + g) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    while (a + h + f + c > 0) {
        if (a > 0) {
            if (e > 0) step(&a, &e, "AE");
            else if (d > 0) step(&a, &d, "AD");
            else if (b > 0) step (&a, &b, "AB");
            else if (g > 0) {
                a--;
                g--;
                cout << "FB+" << endl;
                cout << "AB-" << endl;
                cout << "FG-" << endl;
            }
        }
        if (h > 0) {
            if (e > 0) step(&h, &e, "HE");
            else if (d > 0) step(&h, &d, "HD");
            else if (g > 0) step(&h, &g, "HG");
            else if (b > 0) {
                h--;
                b--;
                cout << "DC+" << endl;
                cout << "HD-" << endl;
                cout << "BC-" << endl;
            }
        }
        if (f > 0) {
            if (e > 0) step(&f, &e, "EF");
            else if (b > 0) step(&f, &b, "BF");
            else if (g > 0) step(&f, &g, "FG");
            else if (d > 0) {
                d--;
                f--;
                cout << "AB+" << endl;
                cout << "AD-" << endl;
                cout << "BF-" << endl;
            }
        }
        if (c > 0) {
            if (b > 0) step(&b, &c, "BC");
            else if (d > 0) step(&c, &d, "CD");
            else if (g > 0) step(&c, &g, "CG");
            else if (e > 0) {
                c--;
                e--;
                cout << "FB+" << endl;
                cout << "EF-" << endl;
                cout << "BC-" << endl;
            }
        }
    }
    return 0;
}
