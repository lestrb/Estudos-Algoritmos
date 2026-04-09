#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preco;
} Produto;

int main(){
    int n, idx_mais_caro;

    scanf("%d", &n);

    Produto *produtos = malloc (n * sizeof(Produto));

    for (int i=0; i<n; i++){
        scanf("%s %f", &produtos[i].nome, &produtos[i].preco);

        if (i == 0){ idx_mais_caro = i; }
        else if (produtos[i].preco > produtos[idx_mais_caro].preco){ idx_mais_caro = i; }
    }

    printf("mais caro: %s %.2f", produtos[idx_mais_caro].nome, produtos[idx_mais_caro].preco);

    free(produtos);
    return 0;
}