#include <stdio.h>
#include <string.h>

int main(){
    char letras[105], letras_dif[26] = "";
    int qtd_diferentes = 0;

    scanf("%s", letras);

    for (int i=0; letras[i]!='\0'; i++){
        if (strchr(letras_dif, letras[i]) == NULL) { // Se letras[i] nao estiver em letras_dif
            letras_dif[qtd_diferentes] = letras[i];
            qtd_diferentes++;
            letras_dif[qtd_diferentes] = '\0'; // Pra manter string valida
        }
    }

    if (qtd_diferentes % 2 == 0) { printf("CHAT WITH HER!"); }  // Par, mulher
    else { printf("IGNORE HIM!"); } // Impar, homem

    return 0;
}