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
#include "nao_enforcou.hpp"
#include "imprimi_erros.hpp"
#include "imprimi_acertos.hpp"
#include "chuta.hpp"
#include "fim_de_jogo.hpp"
#include "le_arquivo.hpp"

using namespace std;
string palavra_sec = "MELANCIA";
map<char, bool> chutou;
vector<char> chute_errado;

int main(){

    imprimi_inicio();
    sorteia_palavra();
    le_arquivo();
    

    while (nao_acertou() && nao_enforcou()){
        imprimi_erros();
        imprimi_acertos();
        chuta();
    }
    fim_de_jogo();
}