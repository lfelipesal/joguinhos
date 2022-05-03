#include <iostream>
#include <string>
#include <vector>
#include "salva_arquivo.hpp"
#include "le_arquivo.hpp"

void adiciona_palavra(){
    std :: cout << "Digite a nova palavra: ";
    std :: string nova_palavra;
    std :: cin >> nova_palavra;

    std :: vector<std :: string> lista_dpalavra = le_arquivo();

    lista_dpalavra.push_back(nova_palavra);

    salva_arquivo(lista_dpalavra);
}