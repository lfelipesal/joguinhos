#include <iostream>

using namespace std;


int main(){

    cout << "****************************" << endl;
    cout << "* Bora adivinhar o numero? *" << endl;
    cout << "****************************" << endl;

    cout << "Qual dificuldade tu quer?" << endl;
    cout << " Fácil (F), Médio (M) ou Difício (D)?" << endl;
    
    char dificuldade;
    cin >> dificuldade;

    int num_tent = 0;

    if(dificuldade == 'F'){
        num_tent = 15;
    }
    else if (dificuldade == 'M'){
        num_tent = 10;
    } else {
        num_tent = 5;
    }

    const int NUM_SECRET = 22;

    bool nao_acertou = true;
    int tentativa = 0;

    double pontuacao = 1000.0;

    for(tentativa = 1; tentativa <= num_tent ; tentativa++){
        int chute=0;
        cout << "Tentativa " << tentativa << endl;
        cout << "Chuta um numero ai jovem!" << endl;
        cin >> chute;

        cout << "Seu chute foi: " << chute << endl;

        bool acertou = chute == NUM_SECRET;
        bool maior = chute > NUM_SECRET;

        double pont_perd = abs(chute - NUM_SECRET)/2.0;
        pontuacao = pontuacao -  pont_perd;

        if (acertou){
            cout << "Parabéns, acertou viado!" << endl;
            nao_acertou = false;
        }else if(maior){
            cout << "Tá grandão esse numero ai viado, diminui!" << endl;
        }else {
            cout << "Esse numero de chute ai ta só o sinarzim! aumenta ai!" << endl;
        }
    }
    cout << "Fim de jogo" << endl;
    if (nao_acertou){
        cout << "Você perdeu, tente novamente" << endl; 
    }else 
    {
        cout << "Acertou em " << tentativa << " tentativas!" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi " << pontuacao << " pontos!" << endl;
    }    
}