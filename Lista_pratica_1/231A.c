#include <stdio.h>

int main(){
    int n, petya, vasya, tonya, i, qtd_certezas, qtd_problemas=0;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        qtd_certezas = 0;
        scanf("%d %d %d", &petya, &vasya, &tonya); // A cada laço de for lê uma linha (um problema)

        // Incrementa var a cada pessoa que sabe a questão
        if (petya == 1){ qtd_certezas++; }
        if (vasya == 1){ qtd_certezas++; }
        if (tonya == 1){ qtd_certezas++; }

        // Checa se pelo menos 2 pessoas sabem a questão p/ incrementar na var da quantidade de problemas q eles vao resolver
        if (qtd_certezas >= 2){ qtd_problemas++; }
    }

    printf("%d", qtd_problemas);

    return 0;
}