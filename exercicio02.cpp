/*

2 – Refaça o exercício anterior utilizando aritmética de ponteiros para manipular o vetor.

*/

#include <iostream>
using namespace std;

int *leitura(int tam){
    int *p;
    p = new int[tam];

    for(int i=0;i<tam;i++)
        *(p+i) = (i+1)*2;
    
    return p;
}

float media(int vet[], int tam){
    int media, *p = vet;

    media = 0;
    for(int i = 0;i<tam;i++)
        media += *(p+i);

    return float(media) / tam;
}

/*
PROBLEMAS ENCONTRADOS NAS FUNÇÕES MAIOR E MENOR:

Quando se tenta trabalhar com laços de repetição e aritimética de ponteiros deve-se tomar cuidado pois
se usarmos *p++ como uma condicional em um certo lugar da função, duas vezes, era capaz de ele alterar
o valor do ponteiro para o próximo valor. Já utilizando *(p+i) conseguimos ter uma condicional mais precisa
apenas do termo atual que esta armazenado no ponteiro, já que utilizamos a variável i como suporte de indice.
*/

int maior(int vet[], int tam){
    int maior = 0, i, *p = vet;

    maior = p[0];
    //Forma correta:
    for(i = 0; i<tam; i++)
        if(*(p+i) > maior){
            maior = *(p+i);
        }
    
    /*Forma errada:
    for(i = 0; i<tam; i++)
        if(*p++ > maior){
            maior = *p++;
        }
    */
    return maior;
}

int menor(int vet[], int tam){
    int i, menor, *p = vet;

    menor = p[0];
    for(i=0;i<tam;i++)
        if(*(p+i) < menor){
            menor = *(p+i);
        }

    return menor;
}

int main(){

    int tam, *vet;
    float mediaa;
    int maiorr, menorr;

    cout<<"Defina um tamanho: ";
    cin>>tam;
    
    vet = leitura(tam);
    mediaa = media(vet, tam);
    maiorr = maior(vet, tam);
    menorr = menor(vet,tam);

    cout<<"Vetor: ";
    for(int i=0;i<tam;i++)
        cout<<*(vet+i)<<" ";
    cout<<endl;

    cout<<"Media do valor do vetor: "<<mediaa<<endl;
    cout<<"Maior valor: "<<maiorr<<endl;
    cout<<"Menor valor: "<<menorr;
    return 0;
}