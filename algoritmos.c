#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "funcoesAuxiliares.h"
#include "desempenho.h"
#include "algoritmos.h"

void bubbleSort(int *vetor, int n) {
    int i, continua, aux, fim = n;

    do{
        continua = 0;
        for(i = 0; i < fim - 1; i++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                continua = i;
            }
        }
        fim--;
    } while(continua != 0);
}

void insertionSort(int *vetor, int n){
    int i, j, aux;
    for(i = 1; i < n; i++){
        aux = vetor[i];
        for(j = i; (j > 0) && (aux < vetor[j - 1]); j--){
            vetor[j] = vetor[j - 1];
        }
        vetor[j] = aux;
    }
}

void selectionSort(int *vetor, int n){
    int i, j, menor, troca;
    for(i = 0; i < n - 1; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }
}

void shellSort(int *vetor, int n){
    int i, j;
    int h = 1;
    int aux;
    int ps = 1;

    do h = h * 3 + 1;

    while(h < n);
    do{
        h /= 3; /* h = (h - 1) / 3 */
        for(i = h; i < n; i++){
            aux = vetor[i];
            j = i;
            while(vetor[j - h] > aux){
                vetor[j] = vetor[j - h];
                j -= h;
                if(j < h) break;
            }
            vetor[j] = aux;
            printf("\n");
        }

    } while(h != 1);
}


void radixSort_lsd(int *vetor, int n) {
    int max_num = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > max_num) {
            max_num = vetor[i];
        }
    }

    int exp = 1;

    while (max_num / exp > 0) {
        // Cria buckets para cada dígito (0-9)
        int buckets[10][n];
        int bucket_sizes[10] = {0};

        // Coloca cada número na lista em seu bucket correspondente
        for (int i = 0; i < n; i++) {
            int digit = (vetor[i] / exp) % 10;
            buckets[digit][bucket_sizes[digit]] = vetor[i]; bucket_sizes[digit]++;
        }

        // Reconstroi a lista ordenada pelos dígitos atuais
        int k = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < bucket_sizes[i]; j++) {
                vetor[k] = buckets[i][j]; k++;
            }
        }

        // Incrementa o dígito em 10 vezes para a próxima iteração
        exp *= 10;
    }

}
