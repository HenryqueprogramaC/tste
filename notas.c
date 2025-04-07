#include <stdio.h>
int main(){

    int nota1, nota2, nota3;
    int media;
    int opcao;

    printf("*** Ola, bem vindo ao final do semestre! *** \n");

    printf("1. Situação\n");
    printf("2. Consultar media\n");
    printf("3. Sair");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("Diga a primeira nota: \n");
    scanf("%d", &nota1);
    printf("Diga a segunda nota: \n");
    scanf("%d", &nota2);
    printf("Diga a terceira nota: \n");
    scanf("%d", &nota3);

    if ((nota1 > 6) && (nota1 <= 10))
    {
        printf("Nota validada.\n");
    } else if ((nota2 > 6) && (nota2 <= 10)) {
        printf("Nota validada.\n");
    } else if ((nota3 > 6) && (nota3 <= 10)) {
        printf("Nota validada.\n");
    } else {
        printf("Nota invalida.");
    }
    break;

    case 2:
    printf("Diga sua 1 nota: \n");
    scanf("%d", &nota1);
    printf("Diga sua 2 nota: \n");
    scanf("%d", &nota2);
    printf("Diga sua 3 nota: \n");
    scanf("%d", &nota3);

    media = nota1, nota2, nota3 / 3;
    printf("Sua media é %d, ", media);

    if (media > 6)
    {
        printf("Aprovado!");
    } else {
        printf("Recuperação");
    }
    break;

    case 3:
    printf("Saindo...");
    break;
    
    default:
    printf("Opção invalida.");
        break;
    }













}