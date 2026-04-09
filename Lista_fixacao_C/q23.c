#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    scanf("%d", &n);

    int *numeros = malloc(n * sizeof(int));

    for (int i=0; i<n; i++){
        scanf("%d", &numeros[i]);
    }

    for (int i=0; i<n; i++){
        printf("%d ", numeros[i]);
    }

    free(numeros);
    return 0;
}