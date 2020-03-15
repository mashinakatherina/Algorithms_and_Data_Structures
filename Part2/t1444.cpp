#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141592653589793238462643383279502884197169399375105820974;
#define AbsMin -9223372036854775807LL - 1;

struct dot {
    long int x;
    long int y;
    double arc;
    int index;
};
int n;
dot dots[30001];

int countToStart() {
    double max_a = (dots[1].arc - dots[n - 1].arc) + 360;
    int max_i = 1;
    for (int i = 1; i < n - 1; i ++) {
        if (dots[i + 1].arc - dots[i].arc > max_a) {
            max_a = dots[i + 1].arc - dots[i].arc;
            max_i = i + 1;
        }
    }
    return max_i;
}

//функция для сравнения точек по углу и (при необходимости расстоянию)
int compareDots(const void *var1, const void *var2) {
    const dot *dot1 = (dot *) var1;
    const dot *dot2 = (dot *) var2;
    if (dot1->arc - dot2->arc > 1e-10) {
        return 1;
    } else if (dot1->arc - dot2->arc < -1e-10) {
        return -1;
    } else {
        if ((dot1->x - dots[0].x) * (dot1->x - dots[0].x) + (dot1->y - dots[0].y) * (dot1->y - dots[0].y) >
            (dot2->x - dots[0].x) * (dot2->x - dots[0].x) + (dot2->y - dots[0].y) * (dot2->y - dots[0].y)) {
            return 1;
        } else {
            return -1;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> dots[i].x;
        cin >> dots[i].y;
        dots[i].index = i;
        if (i == 0) {
            dots[i].arc = AbsMin;
            continue;
        }
        if (dots[i].x - dots[0].x == 0) {
            if (dots[i].y > dots[0].y) {
                dots[i].arc = 90;
            } else {
                dots[i].arc = -90;
            }
            continue;
        }

        dots[i].arc = atan((double) (dots[i].y - dots[0].y) / (dots[i].x - dots[0].x)) * 180.0 / PI;
        if ((dots[i].x - dots[0].x) <= 0) {
            dots[i].arc -= 180;
        }
    }

    qsort(dots, n, sizeof(dot), compareDots);


    cout << n << endl;

    int startPosition = countToStart();

    cout << 1 << endl;

    for (int i = startPosition; i < n; i ++) {
        cout << dots[i].index + 1 << endl;
    }

    for (int i = 1; i < startPosition; i ++) {
        cout << dots[i].index + 1 << endl;
    }
    return 0;
}