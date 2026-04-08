#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x1, x2, h;
} Arvore;

int main(){
    int n, qtd_derrubada = 2; // A primeira arvore sempre pode ser derrubada pra esquerda e a ultima pra direita

    scanf ("%d", &n);

    if (n == 1) { 
        printf("1\n");
        return 0;
    }

    Arvore *arvores = malloc (n * sizeof(Arvore));

    for (int i=0; i<n; i++){
        scanf("%d %d", &arvores[i].x1, &arvores[i].h);
        arvores[i].x2 = arvores[i].x1;
    }

    for (int i=1; i<n-1; i++){ // Analisa até a penultima
        // Checa primeiro se pode derrubar pra esquerda
        if (arvores[i].x1 - arvores[i-1].x2 > arvores[i].h) { // Cabe esquerda
            qtd_derrubada++;
            arvores[i].x1 = arvores[i].x1 - arvores[i].h; // Atualiza x1 (esquerda)
        }
        // Checa direita
        else if (arvores[i+1].x1 - arvores[i].x2 > arvores[i].h){ // Cabe direita
            qtd_derrubada++;
            arvores[i].x2 = arvores[i].x2 + arvores[i].h; // Atualiza x2 (direita)
        }
    }

    printf("%d", qtd_derrubada);

    free (arvores);
    return 0;
}