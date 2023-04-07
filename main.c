//Arquivo main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "listaClientes.h"
#include "funcoesAuxiliares.h"

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
        int options, options2;
        menu();
        options = resp_menu();

        switch(options){
        case 1 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> BubbleSort\n");
            pausaTela;

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 2 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> InsertionSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 3 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> SelectionSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 4 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> ShellSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 5 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> MergeSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 6 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> QuickSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 7 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> HeapSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 8 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> RadixSort (somente LSD)\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

            break;
        case 9 :
            apagaTela;
            printf("\nVoce escolheu o algoritmo -> TimSort\n");

            //sub menu
            sub_menu();
            options2 = resp_sub_menu();
            switch(options2){
            case 1:
                printf("\nVoce escolheu a opcao de 1.000 elementos\n");
                pausaTela;
                break;
            case 2:
                printf("\nVoce escolheu a opcao de 5.000 elementos\n");
                pausaTela;
                break;
            case 3:
                printf("\nVoce escolheu a opcao de 10.000 elementos\n");
                pausaTela;
                break;
            case 4:
                printf("\nVoce escolheu a opcao de 20.000 elementos\n");
                pausaTela;
                break;
            case 5:
                printf("\nVoce escolheu a opcao de 50.000 elementos\n");
                pausaTela;
                break;
            case 6:
                printf("\nVoce escolheu a opcao de 100.000 elementos\n");
                pausaTela;
                break;
            default:
                printf("ERRO!!!!! \nPreencha o menu corretamente\n");
                pausaTela;
                break;
            }

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
    }
}


