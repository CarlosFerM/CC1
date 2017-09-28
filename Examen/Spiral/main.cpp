#include <iostream>

using namespace std;

void espiral(const int esp[][],int tam){

for(int j=0;j<tam;j++){
    cout<< esp[0][j];
}
for(int i=1;i<tam-1;i++){
    cout<< esp[i][tam-1];
}
for(int i=tam-1;i>0;i--){
    cout<< esp[i][tam-1];
}
for(int i=tam-1;i>0;i--){
    cout<< esp[i][0];
}
for(int j=1;j<tam-1;j++){
    cout<< esp[1][j];
}
for(int i=2;i<tam-2;i++){
    cout<< esp[i][tam-2];
}
for(int i=tam-2;i>1;i--){
    cout<< esp[i][tam-2];
}
}

int main()
{
int matriz[][]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
espiral(matriz,4);
return 0;
}
