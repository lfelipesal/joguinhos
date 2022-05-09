#include <iostream>
#include "chuta.hpp"
#include "letra_existe.hpp"

void chuta(std :: map<char, bool>& chutou,std :: vector<char>& chute_errado){
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