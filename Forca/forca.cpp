#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
string palavra_sec = "MELANCIA";
map<char, bool> chutou;
vector<char> chute_errado;

bool letra_existe( char chute){
    for(char letra : palavra_sec){
        if(chute == letra){
            return true;
            
        }
    }
    return false;
}

bool nao_acertou(){
    for(char letra : palavra_sec){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    return chute_errado.size()<5;
}

void imprimi_inicio(){
    cout << "****************************" << endl;
    cout << "* Bora adivinhar a fruta? **" << endl;
    cout << "****************************" << endl;
    cout << endl;
    
}

void imprimi_erros(){
    cout << "Chutes errados: ";
    for(char letra: chute_errado){
        cout << letra << " ";
    }
    cout << endl;
}

void imprimi_acertos(){
    for(char letra : palavra_sec){
        if(chutou[letra]){
            cout << letra << " ";
        }else{
            cout << "_ ";
        }
    }
    cout << endl;
}

vector<string> le_arquivo(){
    ifstream arquivo;
    arquivo.open("palavras.txt");
    // lendo inteiro no arquivo
    int quant_palavras;
    if(arquivo.is_open()){
        arquivo >> quant_palavras;

        vector<string> palavras_do_arquivo;

        for(int i=0;i<quant_palavras;i++){
            string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
        }
        arquivo.close();
        return palavras_do_arquivo;
    }else {
        cout << "Não achei o arquivo!" << endl;
        exit(0);
    }
    
}

void chuta(){
    char chute;
        cout << "Seu chute: ";
        cin >> chute;
        chutou[chute] = true;
        if(letra_existe(chute)){

            cout << "Está na palavra secreta" << endl;
        }else {
            cout << "Não está na palavra" << endl;
            chute_errado.push_back(chute);
        }
    cout << endl;
}

void salva_arquivo(vector<string> nova_lista){
    ofstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open()){
        arquivo << nova_lista.size() << endl;
        
        for(string palavra : nova_lista){
            arquivo << palavra << endl;
        }

        arquivo.close();
    }else {
        cout << "Não achei o arquivo!" << endl;
        exit(0);
    }
}

void adiciona_palavra(){
    cout << "Digite a nova palavra: ";
    string nova_palavra;
    cin >> nova_palavra;

    vector<string> lista_dpalavra = le_arquivo();

    lista_dpalavra.push_back(nova_palavra);

    salva_arquivo(lista_dpalavra);
}

void fim_de_jogo(){
    cout << "Acabou o jogo" << endl;
    cout << "A palavra era: " << palavra_sec << endl;

    if(nao_acertou()){
        cout << "Você foi enforcado :(  Tenta denovo!" << endl;
    }else {
        cout << "Você acertou a palavra, parabéns!" << endl;

        cout << "Deseja adicionar uma nova palavra? (S/N)" << endl;
        char resp;
        cin >> resp;
        if(resp == 'S'){
            adiciona_palavra();
        }
    }
}

void sorteia_palavra(){
    vector<string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sort = rand() % (palavras.size() -1);

    palavra_sec = palavras[indice_sort];
}

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