#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nResultado Final\n");
    printf("Aluno: %s", nome);
    printf("Média: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situação: Aprovado\n");
    } 
    else if (media >= 5.0 && media < 7.0) {
        printf("Situação: Recuperação\n");
    } 
    else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}