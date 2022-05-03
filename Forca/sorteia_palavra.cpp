#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"

extern std :: string palavra_sec;

void sorteia_palavra(){
    std :: vector<std :: string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sort = rand() % (palavras.size() -1);

    palavra_sec = palavras[indice_sort];
}