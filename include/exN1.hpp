#pragma once

class exN1 {
public:
    struct ex1N1 {
        double sum = 0.0;
        int count = 0;
        int *coord{};
    };

    struct ex2N1 {
        int coordStart = 0;
        int coordEnd = 0;
        double sum = 0.0;
    };

    static ex1N1 SumOdd(const double *arr, int length);
    static ex2N1 SumBetweenNegative(const double *arr, int length);
    static double *ArrMoreAbs1(const double *arr, int length);
};
