#include <stdio.h>

int main() {
    float v, t, s;

    printf("Perhitungan jarak tempuh kota A dan kota B.\n");

    printf("Berikan nilai kecepatan dalam km/h: ");
    scanf("%f", &v);
    printf("Berikan waktu tempuh dalam jam: ");
    scanf("%f", &t);

    printf("kecepatan: %fkm/h\n", v);
    printf("waktu tempuh: %fh\n", t);
    printf("Jarak tempuh kota A ke B: %f km\n", s = v * t);

    return 0;
}