#include <iostream>
#include <cmath>

//1401. Игроки
int board[512][512];

// i, j - координаты начала квадрата
// x, y - координаты дырки
// n - координаты дырки
void makeBoard(int x, int y, int i, int j, int n) {
    static int c; // счетчик для фигур
    c++;
    if ((x - j) < n / 2 && (y - i) < n / 2) {
// cout << "четвертая четверть" << endl;
        if (n == 2) {
            board[i][j + 1] = c;
            board[i + 1][j] = c;
            board[i + 1][j + 1] = c;
            return;
        }
        board[i + n / 2 - 1][j + n / 2] = c;
        board[i + n / 2][j + n / 2 - 1] = c;
        board[i + n / 2][j + n / 2] = c;
        makeBoard(x, y, i, j, n / 2);
        makeBoard(j + n / 2, i + n / 2 - 1, i, j + n / 2, n / 2);
        makeBoard(j + n / 2, i + n / 2, i + n / 2, j + n / 2, n / 2);
        makeBoard(j + n / 2 - 1, i + n / 2, i + n / 2, j, n / 2);
    } else if ((x - j) >= n / 2 && (y - i) < n / 2) {
// cout << "первая четверть" << endl;
        if (n == 2) {
            board[i][j] = c;
            board[i + 1][j] = c;
            board[i + 1][j + 1] = c;
            return;
        }
        board[i + n / 2 - 1][j + n / 2 - 1] = c;
        board[i + n / 2][j + n / 2 - 1] = c;
        board[i + n / 2][j + n / 2] = c;
        makeBoard(j + n / 2 - 1, i + n / 2 - 1, i, j, n / 2);
        makeBoard(x, y, i, j + n / 2, n / 2);
        makeBoard(j + n / 2, i + n / 2, i + n / 2, j + n / 2, n / 2);
        makeBoard(j + n / 2 - 1, i + n / 2, i + n / 2, j, n / 2);
    } else if ((x - j) >= n / 2 && (y - i) >= n / 2) {
// cout <<  "вторая четверть"  << endl;
        if (n == 2) {
            board[i][j] = c;
            board[i + 1][j] = c;
            board[i][j + 1] = c;
            return;
        }
        board[i + n / 2 - 1][j + n / 2 - 1] = c;
        board[i + n / 2][j + n / 2 - 1] = c;
        board[i + n / 2 - 1][j + n / 2] = c;
        makeBoard(j + n / 2 - 1, i + n / 2 - 1, i, j, n / 2);
        makeBoard(j + n / 2, i + n / 2 - 1, i, j + n / 2, n / 2);
        makeBoard(x, y, i + n / 2, j + n / 2, n / 2);
        makeBoard(j + n / 2 - 1, i + n / 2, i + n / 2, j, n / 2);
    } else if ((x - j) < n / 2 && (y - i) >= n / 2) {
// cout <<  "третья четверть" << endl;
        if (n == 2) {
            board[i][j] = c;
            board[i][j + 1] = c;
            board[i + 1][j + 1] = c;
            return;
        }
        board[i + n / 2 - 1][j + n / 2 - 1] = c;
        board[i + n / 2][j + n / 2] = c;
        board[i + n / 2 - 1][j + n / 2] = c;
        makeBoard(j + n / 2 - 1, i + n / 2 - 1, i, j, n / 2);
        makeBoard(j + n / 2, i + n / 2 - 1, i, j + n / 2, n / 2);
        makeBoard(j + n / 2, i + n / 2, i + n / 2, j + n / 2, n / 2);
        makeBoard(x, y, i + n / 2, j, n / 2);
    }
}

int main() {
    int n, x, y;
    std::cin >> n >> y >> x;
    x--;
    y--;
    n = (int) pow(2, n);
    if ((int) (pow(n, 2) - 1) % 3 != 0) {
        std::cout << -1;
        return 0;
    }
    makeBoard(x, y, 0, 0, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}


