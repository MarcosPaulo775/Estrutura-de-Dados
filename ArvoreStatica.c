#include <stdio.h>
#include <stdlib.h>

static int vet[15];

int preenche_vetor(){
    for(int j=0 ; j<15 ; j++){
        vet[j]=-1;
    }
}

void imprimir(){
    for(int i=0 ; i<15 ; i++){
        if(vet[i] != -1)
            printf("\nPosição[%d] : %d",i,vet[i]);
    }
}

int insere(int valor){
    int aux = 0;
    int cont = 0;

    while(aux == 0){
        if(vet[cont] == -1){
            vet[cont] = valor;
            aux = 1;
            return 1;

        }else{

            if(valor < vet[cont]){
                if(vet[2*cont+1] == -1){
                    vet[2*cont+1] = valor;
                    aux = 1;
                    return 1;
                }else cont = 2*cont+1;
            }

            else{
                if(vet[2*cont+2] == -1){
                    vet[2*cont+2] = valor;
                    aux = 1;
                    return 1;
                }else cont = 2*cont+2;
            }
        }
    }
    return 0;
}

int main(){

    preenche_vetor();

    insere(10);
    insere(7);
    insere(8);
    insere(13);
    insere(14);
    insere(15);
    insere(2);

    imprimir();

}
