#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

int main(){
    Ponto p1, p2;
    float dist;

    scanf ("%f %f\n%f %f", &p1.x, &p1.y, &p2.x, &p2.y);

    dist = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    printf("distancia: %.2f", dist);

    return 0;
}