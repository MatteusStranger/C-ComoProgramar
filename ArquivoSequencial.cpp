#include<iostream>
#include<fstream>
#include<cstdlib>

int main(){
    using namespace std;
    ofstream outClientFile("clients.dat", ios::out);
    if(!outClientFile){
        cerr<<"Arquivo não pode ser aberto"<<endl;
        exit(1);
    }
    cout<<"Digite a conta, o nome e o saldo\n"<<
    "Digite fim de arquivo para terminar a entrada.\n?";

    int account;
    string name;
    double balance;

    while(cin>>account>>name>>balance){
        outClientFile<<account<<' '<<name
        <<' '<<balance<<'\n';
        cout<<"?";
    }
    return 0;
}
