#include <stdio.h>
#include <string.h>

int main(){
    char palavra[102];
    int qtd_palavras, i, tamanho_palavra, tamanho_interno;

    scanf("%d", &qtd_palavras);
    getchar(); // Pra desconsiderar a quebra de linha 

    for (i=0; i<qtd_palavras; i++){
        fgets(palavra, 102, stdin); // Lê entrada, guarda no array e restringe a 100 caracteres

        tamanho_palavra = strlen(palavra);
        if (palavra[tamanho_palavra-1] == '\n'){ // Quebra de linha sendo lida como um caractere e considerada pro tamanho da palavra
            palavra[tamanho_palavra-1] = '\0';
            tamanho_palavra--;
        }

        if (tamanho_palavra <= 10){
            printf("%s\n", palavra);
        }
        else {
            tamanho_interno = tamanho_palavra - 2;
            printf("%c%d%c\n",palavra[0], tamanho_interno, palavra[tamanho_palavra-1]);
        }
    }
    return 0;
}