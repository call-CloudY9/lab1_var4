#pragma once

#include <cstdio>

class exN3 {
public:
    static FILE* openFile(const char* filename);
    static void closeFile(FILE* file);
    static void printWordsStartingWithVowels(FILE* file);
};
