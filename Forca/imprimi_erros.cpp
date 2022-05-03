#include <vector>
#include <iostream>

extern std :: vector<char> chute_errado;

void imprimi_erros(){
    std ::cout << "Chutes errados: ";
    for(char letra: chute_errado){
        std :: cout << letra << " ";
    }
    std :: cout << std :: endl;
}