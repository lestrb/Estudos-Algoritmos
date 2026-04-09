#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[202];
    int tamanho;

    scanf("%s", palavra);

    tamanho = strlen(palavra) + 1;

    char *stringg = malloc (1 * tamanho);

    for (int i=0; i<tamanho; i++){
        stringg[i] = palavra[i];
    }

    for (int i=0; i<tamanho-1; i++){
        printf("%c", stringg[i]);
    }

    free(stringg);
    return 0;
}