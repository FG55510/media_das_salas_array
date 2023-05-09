#include <iostream>
using namespace std;
int main() {
//criação da array e da variavel media
int salas[6], media = 0;
//definição da quantidade de alunos;
salas[0] = 10;
salas[1] = 50;
salas[2] = 30;
salas[3] = 40;
salas[4] = 60;
salas[5] = 20;

//soma do numero de alunos para a media adicionado em contagem para facilitar o processo
for(int i = 0; i < 6; i++) {
    media = media+salas[i];
}
//divisao para a finalizacao do calculo da media
media =media/6;
cout <<"A media de alunos é " << media << endl;

//Para cada sala se ela conter um numero maior ou igual o da media, o programa informara ao usuario
for(int i=0; i<6; i++){
    if (salas[i]>= media){
        cout <<"A sala "<<i+1 <<" tem mais alunos que a media" << endl;
    }
}

return 0;
}
