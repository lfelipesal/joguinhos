#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
const string PALAVRA_SEC = "MELANCIA";
map<char, bool> chutou;
vector<char> chute_errado;

bool letra_existe( char chute){
    for(char letra : PALAVRA_SEC){
        if(chute == letra){
            return true;
            
        }
    }
    return false;
}

int main(){

    cout << "****************************" << endl;
    cout << "* Bora adivinhar a fruta? **" << endl;
    cout << "****************************" << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){

        cout << "Chutes errados: ";
        for(char letra: chute_errado){
            cout << letra << " ";
        }
        cout << endl;

        for(char letra : PALAVRA_SEC){
            if(chutou[letra]){
                cout << letra << " ";
            }else{
                cout << "_ ";
            }
        }
        cout << endl;
        char chute;
        cout << "Seu chute: ";
        cin >> chute;
        chutou[chute] = true;
        

        if(letra_existe(chute)){

            cout << "Está na palavra secreta" << endl;
            cout << "entrou" << endl;
        }else {
            cout << "Não está na palavra" << endl;
            chute_errado.push_back(chute);
        }
        cout << endl;
    }

}