#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    scanf("%d", &n);

    int *numeros = malloc(n * sizeof(int));

    for (int i=0; i<n; i++){
        scanf("%d", &numeros[i]);
    }

    numeros = realloc(numeros, (2*n) * sizeof(int));

    for (int i=n; i<n*2; i++){
        numeros[i] = 0;
    }

    for (int i=0; i<n*2; i++){
        printf("%d ", numeros[i]);
    }

    free(numeros);
    return 0;
}