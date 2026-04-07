#include <stdio.h>
 
int main(){
    int n, k, i, n_temp;
    
    scanf("%d %d", &n, &k);
    
    for (i=0; i<k; i++){
        if (n%10 == 0){ // termina com 1
            n_temp = n / 10;
            n = n_temp;
        }
        else {
            n--;
        }
    }
    
    printf ("%d", n);
    
    return 0;
}