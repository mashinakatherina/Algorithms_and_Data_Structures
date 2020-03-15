#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long n, x[100005], y[100005], sum = 0;

int main() {

    cin >> n;

    for (int i = 0; i < n; i ++) {
        cin >> x[i] >> y[i];
    }

    stable_sort(x, x + n);
    stable_sort(y, y + n);

    for (int i = 1; i < n; i ++) {


        sum += (x[i] - x[i - 1]) * i * (n - i) * 2;
        sum += (y[i] - y[i - 1]) * i * (n - i) * 2;
    }

    cout << sum /((n - 1) * n) << endl;

    return 0;
}
