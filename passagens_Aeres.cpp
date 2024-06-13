//Participantes : Higor , Yasmin S.
#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <locale.h>
using namespace std;
void desenhaBoasVindas(){ 

    cout << "__________________________"<<endl;
    cout << "|                        |"<<endl;
    cout << "|  Bem Vindo ao programa |"<<endl;
    cout << "|           de           |"<<endl;
    cout << "|    Passagens A�reas    |"<<endl;
    cout << "|                        |"<<endl;
    cout << "|________________________|"<<endl;
    cout<<endl;

};
void desenhaMenu(){
    
    cout << "-----------Menu-----------"<<endl;
    cout << "|                        |"<<endl;
    cout << "| Escolha uma op��o:     |"<<endl;
    cout << "|  1) Cadastrar Passagem |"<<endl;
    cout << "|  2) Listar Passagens   |"<<endl;
    cout << "|  0) Sair               |"<<endl;
    cout << "-----------Menu-----------"<<endl;
    cout << "op��o: ";
    
};
void limpaBufferDocin(){
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
};
vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;
void passagens(){
     string nome, destino, origem, dataViagem;
     limpaBufferDocin();
     cout << "Digite o nome do passageiro: ";
     getline(cin, nome);
     cout << "\n";
     passageiros.push_back(nome);

      cout << "Qual � a origem? ";
     getline(cin, origem);
     cout << "\n";
     origens.push_back(origem);

      cout << "Qual � o seu destino? ";
     getline(cin, destino);
     cout << "\n";
     destinos.push_back(destino);

      cout << "Qual � a data da viagem? ";
     getline(cin, dataViagem);
     cout << "\n";
     datas.push_back(dataViagem);

     
}
void listarPassagem(){
      
    cout << "--------------------------"<<endl;
    cout << "|                        |"<<endl;
    cout << "|  Bem vindo ao programa |"<<endl;
    cout << "|          De            |"<<endl;
    cout << "|  Lista de Passageiros  |"<<endl;
    cout << "|                        |"<<endl;
    cout << "--------------------------"<<endl;
    cout << endl<< endl;
     cout << "Quantidade de Passageiros: "<< passageiros.size()<<endl<<endl;
     for( int i = 0; i < passageiros.size(); i++){
          cout <<"Passageiro "<<i+1<<": "<<passageiros[i] <<endl;
          cout <<"Origem "<<i+1<<": "<<origens[i] <<endl;
          cout <<"Destino "<<i+1<<": "<<destinos[i] <<endl;
          cout <<"Data "<<i+1<<": "<<datas[i] <<endl;
          cout << endl;
     }
}
int main()
{ system("cls");
setlocale(LC_ALL,"Portuguese");
     int opcao = -1;
     string continua = "";
    desenhaBoasVindas();

    do{
        desenhaMenu();
        cin >> opcao;
        cout << endl;//pula linha apos a escolha doa opcao
        
    switch (opcao)
    {
    case 0 :
         cout << "Voce escolheu a op��o Sair do programa" << endl;
        break;
    case 1 :
         cout << "Voce escolheu a op��oo Cadastrar Passagem"<< endl;
         passagens();
         break;
    case 2 :
         cout << "Voce escolheu a op��o Listar Passagens"<< endl;

         listarPassagem();
         break;
    default:
         cout << "Op��o inv�lida" << endl;
         break;
    }
    } while(opcao != 0);
    system ("cls");
    cout << "Obrigado por utilizar o programa! \n\n";


 return 0;
}
