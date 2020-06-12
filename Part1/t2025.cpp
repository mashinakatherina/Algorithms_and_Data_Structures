#include <iostream>
using namespace std;

int main() {

    int in;
    cin >> in;

    for (int i = 0; i < in; ++i) {

        long int n, k;
        cin >> n >> k;

        long numberOfRegularTeam = n/k;

        long numberOfTeamless = n % k;

        long numberOfExtendedTeam = numberOfRegularTeam + 1;

        long result = ((k - numberOfTeamless) *
                       numberOfRegularTeam * (n - numberOfRegularTeam) +
                       numberOfTeamless * numberOfExtendedTeam *
                       (n - numberOfExtendedTeam)) / 2;
        cout << result << endl;
    }
    return 0;
}
