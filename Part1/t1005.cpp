#include <iostream>
#include <cmath>

int separate(int i, int heap1, int heap2, int array[]);
int MinimumWeightDifference = INT_MAX;
int n;

int main() {
    std::cin >> n;
    int weightOfRocks[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> weightOfRocks[i];
    }
    separate(0, 0, 0, weightOfRocks);
    std::cout << MinimumWeightDifference;
    return 0;
}

int separate(int i, int heap1, int heap2,int array[]) {
    if (i == n) {
        MinimumWeightDifference = std::min(MinimumWeightDifference, std::abs(heap1 - heap2));
    } else {
        separate(i + 1, heap1 + array[i], heap2, array);
        separate(i + 1, heap1, heap2 + array[i], array);
    }
    return MinimumWeightDifference;
}
