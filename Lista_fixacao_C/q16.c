#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[52];
    int matricula;
    float nota;
} Aluno;

int main(){
    Aluno aluno;

    // fgets(variável, tamanho_máximo, canal_de_entrada)
    fgets(aluno.nome, 52, stdin); // Pq pode ter espaço
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0'; // strcspn busca caractere e retorna idx - substitui quebra de linha pelo fim da string ('\0')

    scanf("%d\n%f", &aluno.matricula, &aluno.nota);

    printf("Nome: %s\nMatricula: %d\nNota: %.2f", aluno.nome, aluno.matricula, aluno.nota);

    return 0;
}