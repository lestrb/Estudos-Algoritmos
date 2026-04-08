#include <stdio.h>
#include <stdlib.h> // malloc, free e qsort
#include <stdbool.h>

typedef struct{
    int x_forca;
    int y_bonus;
} Dragao;

int comparar_dragoes(const void *a, const void *b) {
    // Ponteiros de Dragao
    Dragao *dragaoA = (Dragao *)a;
    Dragao *dragaoB = (Dragao *)b;

    // Compara usando o x_forca
    return (dragaoA->x_forca > dragaoB->x_forca) - (dragaoA->x_forca < dragaoB->x_forca);
}

int main (){
    int s_forca, n_dragoes;
    bool ganhou = true;

    // Dragao *dragoes;

    scanf ("%d %d", &s_forca, &n_dragoes);

    Dragao *dragoes = malloc(n_dragoes * sizeof(*dragoes));
    // dragoes = (Dragao *) malloc(n_dragoes * sizeof(Dragao)); // Alocacao dinamica do array de structs

    for (int i=0; i<n_dragoes; i++){
        scanf("%d %d", &dragoes[i].x_forca, &dragoes[i].y_bonus);
    }

        // array      qtd      tam elemento      funcao juiz
    qsort(dragoes, n_dragoes, sizeof(Dragao), comparar_dragoes);

    for (int i=0; i<n_dragoes; i++){
        if (s_forca > dragoes[i].x_forca) { s_forca = s_forca + dragoes[i].y_bonus; } // Se vencer, adiciona bonus
        else { 
            ganhou = false; // Se perder, ganhou = false e encerra o loop
            break; 
        }
    }

    if (ganhou){ printf("YES"); }
    else { printf("NO"); }

    free(dragoes);
    return 0;
}