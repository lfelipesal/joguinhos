#include <string>
#include <map>

extern std :: map<char, bool> chutou;
extern std :: string palavra_sec;


bool nao_acertou(){
    for(char letra : palavra_sec){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}