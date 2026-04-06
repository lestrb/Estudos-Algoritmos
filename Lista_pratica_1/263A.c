#include <stdio.h>
#include <stdbool.h>

int main(){
    int i, n=5, desloc_v=0, desloc_h=0, desloc_final; 
    int c1, c2, c3, c4, c5;
    bool achou_1=false;

    for (i=0; i<n; i++){
        scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
        
        // Checa se nessa linha veio o 1
        if (c1 == 1 || c5 == 1){ // Nas colunas da extremidade, precisa deslocar 2
            desloc_h = 2; 
            achou_1 = true;
        }
        else if (c2 == 1 || c4 == 1){ // Nas colunas diretamente coladas com a do meio, precisa deslocar 1
            desloc_h = 1; 
            achou_1 = true;
        }
        else if (c3 == 1){ achou_1 = true; } // Nas coluna do meio não precisa deslocar

        // Quando achar o 1
        if (achou_1){ 
            if (i == 0 || i == 4){ desloc_v = 2; } // Extremidades desloca 2
            else if (i == 1 || i == 3){ desloc_v = 1; } // Linhas diretamente coladas desloca 1
            break; // Encerra o loop
        }
    }

    desloc_final = desloc_h + desloc_v;

    printf("%d", desloc_final);

    return 0;
}