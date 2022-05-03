#include <string>
#include <map>
#include <iostream>

extern std :: map<char, bool> chutou;
extern std :: string palavra_sec;
     
void imprimi_acertos(){
    for(char letra : palavra_sec){
        if(chutou[letra]){
            std ::cout << letra << " ";
        }else{
            std ::cout << "_ ";
        }
    }
    std::cout << std::endl;
}