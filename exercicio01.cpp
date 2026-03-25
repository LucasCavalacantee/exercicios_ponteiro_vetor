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
    int i, media;
    
    media = 0;
    for(i=0;i<tam;i++)
        media += vet[i];
    
    return float(media/tam);
}

int maior(int vet[], int tam){
    int i, maior;

    maior = vet[0];
    for(i=1;i<tam;i++)
        if(vet[i] > maior)
            maior = vet[i];
    return maior;
}

int menor(int vet[], int tam){
    int i, menor;

    menor = vet[0];
    for(i=1;i<tam;i++)
        if(vet[i] < menor)
            menor = vet[i];
    return menor;
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
    
    cout<<"Media dos valores: "<<mediaa<<endl;
    cout<<"Maior valor: "<<maior(vet, tam)<<endl;
    cout<<"Menor valor: "<<menor(vet, tam)<<endl;
    delete []vet;
    return 0;
}