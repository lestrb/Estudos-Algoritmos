#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main(){
    int n, idx_maior;
    float soma = 0;

    scanf("%d", &n);

    Aluno *alunos = malloc(n * sizeof(Aluno));

    for (int i=0; i<n; i++){
        scanf("%s %f", &alunos[i].nome, &alunos[i].nota);

        if (i==0 || alunos[i].nota > alunos[idx_maior].nota){ 
            idx_maior = i;
        }
        soma = soma + alunos[i].nota;
    }

    printf("melhor: %s\n", alunos[idx_maior].nome);
    printf("media: %.2f", soma/n);

    return 0;
}
