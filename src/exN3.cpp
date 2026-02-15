#include "../include/exN3.hpp"

#include <iostream>

FILE *exN3::openFile(const char *filename) {
    FILE* file = fopen(filename, "r");

    if (!file) {
        std::cerr<<"Ошибка открытия файла; ";
    }

    return file;
}

void exN3::closeFile(FILE *file) {
    if (file) {
        fclose(file);
    }
}

inline bool isVowel(char c) {
    c = std::tolower(static_cast<unsigned char>(c));

    return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'y');
}

void exN3::printWordsStartingWithVowels(FILE *file) {
    if (!file) return;

    const int MAX_WORD = 256;
    char word[MAX_WORD];

    while (fscanf(file, "%255s", word) == 1) {
        int i = 0;

        while (word[i] != '\0' && !std::isalpha(static_cast<unsigned char>(word[i]))) {
            i++;
        }

        if (word[i] != '\0' && isVowel(word[i])) {
            printf("%s; ", word + i);
        }
    }
}
