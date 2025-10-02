#include <stdio.h>

int main(){
    char nome[50]; //array de caracteres para armazenar nome
    int idade;    //variável para idade

    //entradas:
    printf("Digite seu nome:");
    scanf("%s",nome);
    printf("Digite sua idade:");
    scanf("%d",&idade);

    if(idade <18){
        printf("Olá, Você não pode fazer a carteira!\n");
    }else{
        printf("Vocẽ pode fazer a carteira");
    }
    return 0;
}