#include "../include/exN2.hpp"

#include <limits>

exN2::ex1N2 exN2::MultStrPositive(int **Matrix, const int SideCount) {
    ex1N2 res;

    for (int i = 0; i < SideCount; i++) {
        bool allPositive = true;
        for (int j = 0; j < SideCount; j++) {
            if (Matrix[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }
        if (allPositive) {
            res.countTrue++;
        }
    }

    if (res.countTrue != 0) {
        res.coordMultStr = new int[res.countTrue];
        res.multiplicationStr = new int[res.countTrue];

        int temp = 0;
        for (int i = 0; i < SideCount; i++) {
            bool allPositive = true;
            for (int j = 0; j < SideCount; j++) {
                if (Matrix[i][j] <= 0) {
                    allPositive = false;
                    break;
                }
            }
            if (allPositive) {
                res.coordMultStr[temp] = i;
                temp++;
            }
        }

        for (int i = 0; i < res.countTrue; i++) {
            int Mult = 1;
            int row = res.coordMultStr[i];
            for (int j = 0; j < SideCount; j++) {
                Mult *= Matrix[row][j];
            }
            res.multiplicationStr[i] = Mult;
        }
    }

    return res;
}


inline int maxSum(const int* arr, const int length) {
    int max = std::numeric_limits<int>::min();
    for (int i = 0; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int exN2::MaxSumDiagonal(int **Matrix, const int SideCount) {
    const int countDiagonal = ((2 * SideCount) - 1);
    auto *arrSum = new int[countDiagonal];
    arrSum[(countDiagonal / 2)] = std::numeric_limits<int>::min();
    for (int i = 0; i < SideCount; i++) {
        for (int j = 0; j < SideCount; j++) {
            if (i - j != 0) {
                int tempCoord = (i - j) + ((countDiagonal - 1) / 2);
                arrSum[tempCoord] += Matrix[i][j];
            }
        }
    }
    const int maxRes = maxSum(arrSum, countDiagonal);
    delete[] arrSum;
    return maxRes;
}

