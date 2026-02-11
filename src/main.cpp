#include <iostream>
#include "../include/exN1.hpp"

int main() {
    int length = 0;
    std::cout<<"Введите длину массива: ";
    std::cin>>length;
    std::cout<<"\n";
    auto *arrExample1 = new double[length];
    std::cout<<"Введите массив вещественных чисел из "<<length<<" чисел: ";
    for (int i = 0; i < length; i++) {
        std::cin>>arrExample1[i];
    }

    exN1::ex1N1 res = exN1::arrSumOdd(arrExample1, length);

    std::cout<<"Сумма равна "<<res.sum<<";\n"<<"Количество равно: "<<res.count<<";\n";
    std::cout<<"Координаты равны: ";
    for (int i = 0; i < res.count; i++) {
        std::cout<<res.coord[i]<<" ";
    }

    delete[] arrExample1;
    return 0;
}