#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int MaxGravitationalPotential = 0;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        sum += tmp;

        if (sum < 0) {
            sum = 0;
        }

        if (sum > MaxGravitationalPotential) {
            MaxGravitationalPotential = sum;
        }
    }
    cout << MaxGravitationalPotential;
    return 0;
}
