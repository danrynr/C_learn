#include <stdio.h>

int main() {
    const float pi = 3.1415;
    float r;

    printf("Jari-jari lingkaran = ");
    scanf("%f", &r);

    printf("Luas lingkaran = %f\n", pi * r * r);
    printf("Akhiri program \n");

    return 0;
}