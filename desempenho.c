#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "funcoesAuxiliares.h"
#include "desempenho.h"
#include "algoritmos.h"



double timer(int *vetor, int tamanho, int alg){
    struct timeval inicio, fim;

    gettimeofday(&inicio, NULL);
    switch(alg){
        case 1:
                bubbleSort(vetor, tamanho);
        break;

        case 2:
                insertionSort(vetor, tamanho);
        break;

        case 3:
                selectionSort(vetor, tamanho);
        break;

        case 4:
                shellSort(vetor, tamanho);
        break;

        case 5:
                mergeSort(vetor, 0,tamanho);
        break;

        case 6:
                quickSort(vetor, 0,tamanho);
        break;

        case 7:
                heapSort(vetor, tamanho);
        break;

        case 8:
                radixSort_lsd(vetor, tamanho);
        break;

        case 9:
                timsort(vetor, tamanho);
        break;
    }
    gettimeofday(&fim, NULL);


    double s = (fim.tv_sec + fim.tv_usec/1000000.0) - (inicio.tv_sec + inicio.tv_usec /1000000.0);
    return s;
}

double media(double *res){
    double soma = 0;
    for(int i = 0; i < 10; i++){
        soma += res[i];
    }
    double media = soma / 10;
    return media;
}
