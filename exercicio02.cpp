/*

2 – Refaça o exercício anterior utilizando aritmética de ponteiros para manipular o vetor.

*/

#include <iostream>
using namespace std;

int *leitura(int tam){
    int *p;
    p = new int[tam];

    for(int i=0;i<tam;i++)
        *(p+i) = i*2;
    
    return p;
}

int media(int vet[], int tam){
    int media, *p = vet;

    for(int i = 0;i<tam;i++)
        media += 
}

int main(){

    int tam, i, vet[tam], *p = vet;
    float mediaa;

    cout<<"Defina um tamanho: ";
    cin>>tam;

    p = leitura(tam);

    cout<<"Vetor: ";
    for(i=0;i<tam;i++)
        cout<<*(p+i)<<" ";
    cout<<endl;

    return 0;
}