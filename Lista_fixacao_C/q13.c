#include <stdio.h>

int main(){
    int n, numeros[102], maior, menor;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d", &numeros[i]);
    }

    for (int i=0; i<n; i++){
        if (i==0){ maior = numeros[i]; menor = numeros[i]; }
        else if (numeros[i] > maior){ maior = numeros[i]; }
        else if (numeros[i] < menor){ menor = numeros[i]; }
    }

    printf("maior: %d\nmenor: %d", maior, menor);

    return 0;
}