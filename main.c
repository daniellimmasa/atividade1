#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char matricula[20];
    char endereco[100];
    char curso[50];
    int periodo;
    char disciplinas[200];

    printf("Cadastro de Aluno\n");

    printf("Nome: ");
    scanf("%s", nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Matricula: ");
    scanf("%s", matricula);

    printf("Endereco: ");
    scanf("%s", endereco);

    printf("Curso: ");
    scanf("%s", curso);

    printf("Periodo: ");
    scanf("%d", &periodo);

    printf("Disciplinas: ");
    scanf("%s", disciplinas);

    printf("\nInformacoes do Cadastro:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %s\n", matricula);
    printf("Endereco: %s\n", endereco);
    printf("Curso: %s\n", curso);
    printf("Periodo: %d\n", periodo);
    printf("Disciplinas: %s\n", disciplinas);

    return 0;
}
