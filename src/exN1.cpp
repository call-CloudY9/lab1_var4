#include "../include/exN1.hpp"


exN1::ex1N1 exN1::arrSumOdd(const double *arr, const int length) {
    ex1N1 res;

    int oddCount = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount > 0) {
        res.coord = new int[oddCount];
    }

    int index = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 != 0) {
            res.sum += arr[i];
            if (res.coord) {
                res.coord[index] = i;
            }
            index++;
        }
    }

    res.count = oddCount;
    return res;
}