#include <stdio.h>
#include <string.h>

int main(){
    int n, tam_array, i, qtd_tirar=0;
    char pedras[52];

    scanf("%d", &n);
    getchar(); // Desconsidera a quebra de linha
    fgets(pedras, 52, stdin);

    tam_array = strlen(pedras);

    for (i=0; i<tam_array; i++){
        if (pedras[i] == pedras [i+1]){ // Checa se o prox caractere é igual ao atual. Se for, incremente qtd de pedras que devem ser tiradas
            qtd_tirar++;
        }
    }   

    printf("%d", qtd_tirar);

    return 0;
}