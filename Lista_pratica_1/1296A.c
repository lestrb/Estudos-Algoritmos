#include <stdio.h>

int main(){
    int t, n, i, j, numero;

    scanf("%d", &t);
    for (i=0; i<t; i++){ // Pra cada caso teste
        scanf("%d", &n);
        int qtd_impar=0, qtd_par=0, soma=0;

        for (j=0; j<n; j++){ // Le numeros do case
            scanf("%d", &numero);
            soma += numero;
            
            // Analisa numero
            if (numero % 2 == 0){ qtd_par++; }
            else { qtd_impar++; }
        }

        // Analisa soma
        if (soma%2 != 0){ // Se impar, YES
            printf("YES\n");
        } 
        else{ // Se par, pode ser YES caso tenha pelo menos 1 impar e 1 par pra fazer a troca
            if (qtd_impar > 0 && qtd_par > 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}