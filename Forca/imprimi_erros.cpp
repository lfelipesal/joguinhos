#include "imprimi_erros.hpp"
#include <iostream>

void imprimi_erros(const std :: vector<char>& chute_errado){
    std ::cout << "Chutes errados: ";
    for(char letra: chute_errado){
        std :: cout << letra << " ";
    }
    std :: cout << std :: endl;
}