#include <stdio.h>

int main() {
    int a;

    printf("Contoh IF dua kasus \n");
    printf("Ketikkan suatu nilai integer :");
    scanf("%d", &a);

    if (a >= 0) {
        printf("Nilai a positif %d \n", a);
    } else {
        printf("Nilai a negatif %d \n", a);
    }
    
    return 0;
}