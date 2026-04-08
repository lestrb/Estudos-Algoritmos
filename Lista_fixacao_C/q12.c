#include <stdio.h>

int main(){
    int n, numeros[102];

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d", &numeros[i]); 
    }

    for (int i=n-1; i>=0; i--){
        printf("%d ", numeros[i]);
    }

    return 0;
}