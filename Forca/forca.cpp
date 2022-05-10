#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "letra_existe.hpp"
#include "nao_acertou.hpp"
#include "imprimi_inicio.hpp"
#include "sorteia_palavra.hpp"
#include "imprimi_erros.hpp"
#include "imprimi_acertos.hpp"
#include "chuta.hpp"
#include "le_arquivo.hpp"
#include "adiciona_palavra.hpp"

using namespace std;
string palavra_sec;
map<char, bool> chutou;
vector<char> chute_errado;

int main(){

    imprimi_inicio();
    palavra_sec = sorteia_palavra();
    le_arquivo();
    

    while (nao_acertou(chutou, palavra_sec) && chute_errado.size()<5){
        imprimi_erros(chute_errado);
        imprimi_acertos(chutou, palavra_sec);
        chuta(chutou,chute_errado);
    }
    
    std :: cout << "Acabou o jogo" << std ::endl;
    std :: cout << "A palavra era: " << palavra_sec << std :: endl;

    if(nao_acertou(chutou, palavra_sec)){
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