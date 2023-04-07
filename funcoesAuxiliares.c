#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcoesAuxiliares.h"
#include "desempenho.h"
#include "algoritmos.h"s


int criaVetor(int *vetor, int tamanho){
    vetor = malloc(tamanho * sizeof(int));
    return vetor;
}

void preencheVetor(int *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }
}

void menu() {
    pula1Linha;
    printf("Escolha um algoritmo de ordenacao: \n");
    printf("1. BubbleSort\n");
    printf("2. InsertionSort\n");
    printf("3. SelectionSort\n");
    printf("4. ShellSort\n");
    printf("5. MergeSort\n");
    printf("6. QuickSort\n");
    printf("7. HeapSort\n");
    printf("8. RadixSort (somente LSD)\n");
    printf("9. TimSort\n");
    printf("10. Sair do programa\n");
}

int resp_menu() {
    int x;
    pula2Linhas;
    printf("Digite a opcao desejada: \n");
    scanf("%d", &x);

    return x;
}

void sub_menu() {
    pula1Linha;
    printf("Escolha a quantidade de elementos a serem ordenados: \n");
    printf("1. 1.000 elementos\n");
    printf("2. 5.000 elementos\n");
    printf("3. 10.000 elementos\n");
    printf("4. 20.000 elementos\n");
    printf("5. 50.000 elementos\n");
    printf("6. 100.000 elementos\n");

}



int opcao_ecolhida(int options2){
    switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                return 1000;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                return 5000;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                return 10000;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                return 20000;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                return 50000;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                return 100000;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
    }
}

int resp_sub_menu() {
    int x;
    pula2Linhas;
    printf("Digite a opcao desejada: \n");
    scanf("%d", &x);

    return x;
}


