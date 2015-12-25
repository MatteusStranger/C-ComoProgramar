#include<iostream>
#include<string>
using namespace std;

string descriptografa(string frase,int chave){
    string novo;
    for(int i=0;i<frase.size();i++){
        novo+= frase[i]+chave;
    }
    return novo;
}

int main(){
    string frase, novo;
    int  chave,opcao;
    getline(cin,frase);
    cin>>chave;
    for(int i=0;i<frase.size();i++){
        novo+= frase[i]+chave;
    }
    cout<<novo<<endl;
    novo = descriptografa(novo,-chave);
    cout<<novo<<endl;
    return 0;
}
