#include <iostream>
using namespace std;
int main() {
//criação da array e da variavel media
int salas[6], media = 0;

//O usuario ira digitar o numero de alunos que ha em cada sala e logo em seguida este numero sera adicionado a media
for(int i = 0; i < 6; i++) {
    cout << "Digite o numero de alunos da sala" << i+1 << endl;
    cin >> salas[i];
    media = media+salas[i];
}
    
//divisao para a finalizacao do calculo da media
media =media/6;
cout <<"A media de alunos é " << media << endl;

//Para cada sala se ela conter um numero maior ou igual o da media, o programa informara ao usuario
for(int i=0; i<6; i++){
    if (salas[i]>= media){
        cout <<"A sala "<<i+1 <<" tem um numero de alunos maior ou igual a media" << endl;
    }
}

return 0;
}
