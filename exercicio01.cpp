/*

1 – Utilizando alocação dinâmica, declare um vetor de N inteiros (onde N é um valor fornecido 
pelo usuário), leia um valor para cada posição e no final mostre a média, o menor e o maior 
valor contidos no vetor.

*/

#include <iostream>
using namespace std;

int *leitura(int tam){
    int i, *p = new int[tam];

    for(i=0;i<tam;i++)
        p[i] = i*2;

    return p;
}

float media(int vet[], int tam){
    int i, maior;
    
    maior = 0;
    for(i=0;i<tam;i++)
        maior += vet[i];
    
    return float(maior/tam);
}

int main(){
    int tam, i, *vet;
    float mediaa;
    
    cout<<"Defina um tamanho: ";
    cin>>tam;

    vet = leitura(tam);
    
    cout<<"Vetor: ";
    for(i=0;i<tam;i++)
        cout<<vet[i]<<" ";
    cout<<endl;
    
    mediaa = media(vet, tam);
    
    cout<<"Media dos valores: "<<mediaa;
    delete []vet;
    return 0;
}