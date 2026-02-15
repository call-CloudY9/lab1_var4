#include <iostream>
#include "../include/exN1.hpp"
#include "../include/exN2.hpp"
#include "../include/exN3.hpp"

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

    const exN1::ex1N1 res1 = exN1::SumOdd(arrExample1, length);
    const exN1::ex2N1 res2 = exN1::SumBetweenNegative(arrExample1, length);
    const double* res3 = exN1::ArrMoreAbs1(arrExample1, length);

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

    std::cout<<"\n";
    std::cout<<"(1.3) Сжатый массив с условием для элементов ( >=|1| ) равен: ";
    for (int i = 0; i < length; i++) {
        std::cout<<res3[i]<<" ";
    }

    std::cout<<"\n"<<"\n";
    int countMatrix;
    std::cout<<"Введите количество строк-столбцов квадратной матрицы: ";
    std::cin>>countMatrix;

    auto arrMatrix = new int *[countMatrix];
    for (int i = 0; i < countMatrix; i++) {
        arrMatrix[i] = new int[countMatrix];
    }
    std::cout<<"\n";
    for (int i = 0; i < countMatrix; i++) {
        std::cout<<"Введите строку, которая поместится в ячейки матрицы с адресами "<<"["<<i<<"][j]: ";
        for (int j = 0; j < countMatrix; j++) {
            std::cin>>arrMatrix[i][j];
        }
    }

    const exN2::ex1N2 res4 = exN2::MultStrPositive(arrMatrix, countMatrix);

    std::cout<<"\n";
    for (int i = 0; i < res4.countTrue; i++) {
        std::cout<<"Произведение элементов в строке с адресом "<<"["<<res4.coordMultStr[i]<<"][j] равно: "<<res4.multiplicationStr[i]<<"\n";
    }

    std::cout<<"\n";
    const int res5 = exN2::MaxSumDiagonal(arrMatrix, countMatrix);
    std::cout<<"Максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы равен: "<<res5<<"\n\n";

    FILE* file = exN3::openFile("../exampleFile/input.txt");

    std::cout<<"Из тестового файла input.txt взят пример английского текста, откуда программа должна прочитать и вывести только те слова, которые начинаются с гласной буквы: ";
    if (file) {
        exN3::printWordsStartingWithVowels(file);
        exN3::closeFile(file);
    }


    for (int i = 0; i < countMatrix; i++) {
        delete[] arrMatrix[i];
    }
    delete[] arrMatrix;
    delete[] res3;
    delete[] arrExample1;
    return 0;
}