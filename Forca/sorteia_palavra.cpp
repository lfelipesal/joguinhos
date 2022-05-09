#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"


std :: string sorteia_palavra(){
    std :: vector<std :: string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sort = rand() % (palavras.size() -1);

    return palavras[indice_sort];
}