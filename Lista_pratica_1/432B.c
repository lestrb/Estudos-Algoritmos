#include <stdio.h>
#include <stdlib.h> // malloc, calloc e free

typedef struct {  // Define bloco padrão pros times, com cor de casa e de fora
    int home;
    int away;
    int qtd_home;
    int qtd_away;
} Time_t;         // É chamado de Time_t

int main(){
    int n, i, conflitos;

    Time_t *times;    // Cria um ponteiro dinâmico que inicia apontando pro inicio do bloco alocado no malloc
    int *freq_home;   

    scanf("%d", &n);

    times = (Time_t *) malloc(n * sizeof(Time_t)); // Chamada malloc pra reservar bloco na Heap pra n estruturas do tipo Time_t
            //Type Cast      //CaLculo da qtd de bytes total pra alocar

    freq_home = (int *) calloc(100002, sizeof(int)); // Inicializa tudo com 0, guarda quantos times tem a cor em questao / 100002 pra sobrar espaço

    for (i=0; i<n; i++){
        scanf("%d %d", &times[i].home, &times[i].away);  // Atribui dinamicamente
        freq_home[times[i].home]++;
    }

    for (i=0; i<n; i++){ // Os times jogam (n-1) vezes em casa. Se for fora, joga com casa caso a cor bata
        conflitos = freq_home[times[i].away];

        times[i].qtd_home = (n - 1) + conflitos;
        times[i].qtd_away = (n - 1) - conflitos;
    }

    for (i=0; i<n; i++){
        printf("%d %d\n", times[i].qtd_home, times[i].qtd_away);
    }

    free(times); // Libera espaço alocado da Heap
    free(freq_home);
    return 0;
}