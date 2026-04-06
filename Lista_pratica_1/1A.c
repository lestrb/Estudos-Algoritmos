#include <stdio.h>

int main(){
    // m e n - lados do retangulo / a - lado do quadrado
    // cabe_em_m e cabe_em_n - qtd de vezes que o lado do quadrado cabe no respectivo lado
    long long m, n, a, cabe_em_m, cabe_em_n, qtd_final; 

    scanf("%lld %lld %lld", &n, &m, &a);

    cabe_em_m = m/a; // Calcula quantas vezes o lado do quadrado cabe nesse lado do retangulo
    if (m % a != 0){ // Caso o resto da div seja 0, nao sobra espaco. Caso contrario, vai ter que comprar um quadrado a mais pra completar
        cabe_em_m++;
    }

    cabe_em_n = n/a;
    if (n % a != 0){
        cabe_em_n++;
    }

    qtd_final = cabe_em_m * cabe_em_n; // Multiplica quantos cabem em cada dimensao para ter a quantidade final
    printf("%lld", qtd_final);

    return 0;
}