#include <iostream>
#include <vector>
#include <map>
#include "letra_existe.hpp"

extern std :: map<char, bool> chutou;
extern std :: vector<char> chute_errado;

void chuta(){
    char chute;
        std ::cout << "Seu chute: ";
        std :: cin >> chute;
        chutou[chute] = true;
        if(letra_existe(chute)){

            std :: cout << "Está na palavra secreta" << std :: endl;
        }else {
            std ::cout << "Não está na palavra" << std ::endl;
            chute_errado.push_back(chute);
        }
    std ::cout << std ::endl;
}