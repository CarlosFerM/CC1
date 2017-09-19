#include <iostream>

using namespace std;

void reverza(int lista[],int tam){
    int indi=tam-1,ulti;
    for(int i=0;i<(tam/2);i++){
        ulti=lista[i];
        lista[i]=lista[indi];
        lista[indi]=ulti;
        indi=indi-1;
    }
}
//    int matriz[]={1,2,3,4,5},tam=5;
//    reverza(matriz,5);
//    for(int j=0;j<tam;j++){
//        cout<<matriz[j];
//    }
//    return 0;
