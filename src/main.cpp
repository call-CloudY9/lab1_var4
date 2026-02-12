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

    exN1::ex1N1 res1 = exN1::SumOdd(arrExample1, length);
    exN1::ex2N1 res2 = exN1::SumBetweenNegative(arrExample1, length);

    std::cout<<"(1.1) Сумма равна: "<<res1.sum<<";"<<" Количество равно: "<<res1.count<<";";
    std::cout<<" Координаты равны: ";
    for (int i = 0; i < res1.count; i++) {
        std::cout<<res1.coord[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"(1.2) Сумма равна: "<<res2.sum;
    if (res2.coordStart + 1 < res2.coordEnd) {
        std::cout<<". Сумма расположена между элементами имеющими индекс: "<<res2.coordStart<<" и "<<res2.coordEnd<<"\n";
    }

    delete[] arrExample1;
    return 0;
}