#include <string>
#include <map>
#include <iostream>
     
void imprimi_acertos(std :: map<char, bool> chutou,std :: string palavra_sec){
    for(char letra : palavra_sec){
        if(chutou[letra]){
            std ::cout << letra << " ";
        }else{
            std ::cout << "_ ";
        }
    }
    std::cout << std::endl;
}