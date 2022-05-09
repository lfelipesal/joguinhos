#include <string>
#include <map>

bool nao_acertou(std :: map<char, bool> chutou, std :: string palavra_sec ){
    for(char letra : palavra_sec){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}