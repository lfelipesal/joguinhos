#include "nao_acertou.hpp"

bool nao_acertou(const std :: map<char, bool>& chutou, const std :: string& palavra_sec ){
    for(char letra : palavra_sec){
        if(chutou.find(letra) == chutou.end() || !chutou.at(letra) ){
            return true;
        }
    }
    return false;
}