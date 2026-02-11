#pragma once

class exN1 {
public:
    struct ex1N1 {
        double sum = 0;
        int count = 0;
        int *coord{};
    };

    static ex1N1 arrSumOdd(const double *arr, const int length);
};
