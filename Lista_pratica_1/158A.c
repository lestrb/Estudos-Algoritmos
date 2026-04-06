#include <stdio.h>

int main(){
    int n, k, i, b, qtd_participantes=0;
    int pontuacoes[52];

    scanf("%d %d", &n, &k);

    // Lê os numeros e coloca-os no array, em suas devidas posicoes
    for (i = 0; i < n; i++){
        scanf("%d", &pontuacoes[i]);
    }

    // Analisa pontuacoes e incrementa quantidade de participantes
    for (b=0; b<n; b++){ 
        if (pontuacoes[b] >= pontuacoes[k-1] && pontuacoes[b] > 0){ 
            qtd_participantes++;
        }  
    }

    printf("%d", qtd_participantes);

    return 0;
}