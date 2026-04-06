#include <stdio.h>
#include <string.h>

int main(){
    char nome_1[102], nome_2[102], letras_desordem[102];
    int tamanho_desordem, i;
    char *n1, *n2;

    fgets(nome_1, 102, stdin);
    fgets(nome_2, 102, stdin);
    fgets(letras_desordem, 102, stdin);

    // Limpa os \n para trabalhar com o tamanho real
    nome_1[strcspn(nome_1, "\n")] = '\0';
    nome_2[strcspn(nome_2, "\n")] = '\0';
    letras_desordem[strcspn(letras_desordem, "\n")] = '\0';

    tamanho_desordem = strlen(letras_desordem);

    for (i=0; i<tamanho_desordem; i++){
        n1 = strchr(nome_1, letras_desordem[i]);
        n2 = strchr(nome_2, letras_desordem[i]);
        if (n1 != NULL){ // Busca char no array do nome. Se não for NULL, exclui a letra de nome_1. Se for, vai pro nome_2
            strcpy(n1, n1 +1); // Copia todo o resto do array pra posicao de n1
        }
        else if (n2 != NULL){
            strcpy(n2, n2 +1);
        } 
        else{ // A letra nao ta em nehum dos nomes, entao sobra. Printa NO
            printf("NO");
            return 0;
        }
    }

    // Ao fim da checagem e reajuste dos arrays de char, checa se o tamanho dos arrays é maior que 0 (strlen vai ate o '\0')
    if (strlen(nome_1) > 0 || strlen(nome_2) > 0){
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}