#include <iostream>
#include <vector>
#include <string>
#include <fstream>


std :: vector< std :: string> le_arquivo(){
    std :: ifstream arquivo;
    arquivo.open("palavras.txt");
    // lendo inteiro no arquivo
    int quant_palavras;
    if(arquivo.is_open()){
        arquivo >> quant_palavras;

        std :: vector< std:: string> palavras_do_arquivo;

        for(int i=0;i<quant_palavras;i++){
            std :: string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
        }
        arquivo.close();
        return palavras_do_arquivo;
    }else {
        std :: cout << "Não achei o arquivo!" << std ::endl;
        exit(0);
    }
    
}