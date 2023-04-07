//Arquivo main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoesAuxiliares.h"
#include "desempenho.h"
#include "algoritmos.h"

int main()
{
    printf("**** Projeto: Desempenho de Algoritmos de Ordenacao ****");
    pula2Linhas;
    printf("**** Alunos: ****");
    pula1Linha;
    printf("Alicia Lopes - GU3026558");
    pula1Linha;
    printf("Gabriel de Araujo - GU3027261");
    pula1Linha;
    printf("Guilherme Monteiro - GU3026647");
    pula1Linha;
    printf("Leonardo dos Reis - GU");
    pula2Linhas;

    printf("**** Menu ****");
    pula1Linha;


    while(1) {

        int *vetor;
        int i = 0;
        long tempo[10];
        long media;

        int options, options2;
        menu();
        options = resp_menu();

        switch(options){
        case 1 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> BubbleSort\n");
            pausaTela;
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 2 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> InsertionSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 3 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> SelectionSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 4 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> ShellSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 5 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> MergeSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 6 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> QuickSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 7 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> HeapSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 8 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> RadixSort (somente LSD)\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 9 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> TimSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            opcao_ecolhida(options2);
            break;
        case 10 :
            apagaTela;
            printf("\nVoce escolheu a opcao 10 -> Sair do programa!\n");
            pula2Linhas;
            pausaTela;
            return 0;
            break;
        default:
            apagaTela;
            printf("ERRO!!!!! \nPreencha o menu corretamente");
            pula2Linhas;
            break;
        }

        //alocação de acordo com valor escolhido
        criaVetor(vetor,options2);
        for(i = 0; i<10 ; i++){
            preencheVetor(vetor);
            //tempo[i] = timer();
        }

    }
}


