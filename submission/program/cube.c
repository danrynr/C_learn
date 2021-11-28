#include <stdio.h>

int main() {
    float s, v;

    printf("Perhitungan volume kubus.\n");
    printf("Berikan panjang sisi dalam cm: ");
    scanf("%f", &s);

    printf("Panjang sisi: %fcm\n", s);
    printf("Volume kubus: %f cm^3", v = s * s * s);

    return 0;
}