#include "../include/exN1.hpp"


exN1::ex1N1 exN1::SumOdd(const double *arr, const int length) {
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

exN1::ex2N1 exN1::SumBetweenNegative(const double *arr, const int length) {
    ex2N1 res;

    for (int i = 0; i < length; i++) {
        if (arr[i] < 0.0) {
            res.coordStart = i;
            break;
        }
    }
    for (int i = length - 1; i > res.coordStart; i--) {
        if (arr[i] < 0.0) {
            res.coordEnd = i;
            break;
        }
    }
    for (int i = res.coordStart + 1; i < res.coordEnd; i++) {
        res.sum += arr[i];
    }

    return res;
}

double *exN1::ArrMoreAbs1(const double *arr, const int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] >= 1.0 || arr[i] <= -1.0) {
            count++;
        }
    }

    if (count != 0) {
        auto *arr_ = new double[count];
    }

    
}

