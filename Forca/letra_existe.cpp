#include <string>

extern std :: string palavra_sec;

bool letra_existe( char chute){
    for(char letra : palavra_sec){
        if(chute == letra){
            return true;
            
        }
    }
    return false;
}