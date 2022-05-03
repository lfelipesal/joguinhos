#include <iostream>
#include "nao_acertou.cpp"
#include "adiciona_palavra.hpp"


void fim_de_jogo(){
    std :: cout << "Acabou o jogo" << std ::endl;
    std :: cout << "A palavra era: " << palavra_sec << std :: endl;

    if(nao_acertou()){
        std :: cout << "Você foi enforcado :( Tenta denovo!" << std :: endl;
    }else {
        std :: cout << "Você acertou a palavra, parabéns!" << std::endl;

        std:: cout << "Deseja adicionar uma nova palavra? (S/N)" <<std:: endl;
        char resp;
        std::cin >> resp;
        if(resp == 'S'){
            adiciona_palavra();
        }
    }
}