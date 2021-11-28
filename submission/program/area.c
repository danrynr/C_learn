#include <stdio.h>

int main() {
    float p, l, a;

    printf("Perhitungan luas ruangan.\n");

    printf("Berikan nilai panjang ruangan: ");
    scanf("%f", &p);
    printf("Berikan nilai lebar ruangan: ");
    scanf("%f", &l);

    printf("Panjang: %fm\n", p);
    printf("Lebar: %fm\n", l);
    printf("Luas ruangan X: %f m^2", a = p * l);

    return 0;
}