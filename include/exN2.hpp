#pragma once

class exN2 {
public:
    struct ex1N2 {
        int* multiplicationStr{};
        int* coordMultStr{};
        int countTrue = 0;
    };

    static ex1N2 MultStrPositive(int** Matrix, int SideCount);
    static int MaxSumDiagonal(int** Matrix, int SideCount);
};