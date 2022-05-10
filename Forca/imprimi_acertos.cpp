#include "imprimi_acertos.hpp"
#include <iostream>
     
void imprimi_acertos( const std :: map<char, bool>& chutou, const std :: string& palavra_sec){
    for(char letra : palavra_sec){
        if( !(chutou.find(letra) == chutou.end()) ){
            std ::cout << letra << " ";
        }else{
            std ::cout << "_ ";
        }
    }
    std::cout << std::endl;
}