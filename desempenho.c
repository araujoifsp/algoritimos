#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "funcoesAuxiliares.h"
#include "desempenho.h"
#include "algoritmos.h"


long timer(void (*funcao)()){
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);

    funcao();

    gettimeofday(&fim, NULL);
    long s = fim.tv_sec - inicio.tv_sec;
    return s;
}

void media(long *res, int tamanho){
    long soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += res[i];
    }
    double media = (double)soma / tamanho;
    printf("Tempo médio de execução: %.5f segundos.\n", media);
}
