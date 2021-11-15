#include <stdio.h>

int main () {
    int i, j;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int max, min, count = 0;
    float avg = 0, sum = 0, median;

    max = Tab[0];
    for (i = 0; i < 10; i++) {
        if (Tab[i] > max) {
            max = Tab[i];
            count++;
        }

        if (Tab[i] < min) {
            min = Tab[i];
        }

        sum += Tab[i];
    }
    avg = sum / i;
    median = (min + max) / 2;


    printf("Nilai Max = %d\n", max);
    printf("Nilai Min = %d\n", min);
    printf("Nilai Rata-Rata = %6.2f\n", avg);
    printf("Nilai Median = %6.2f\n", median);
    printf("Nilai Max = %d, muncul sebanyak %d kali\n", max, count);
    return 0;
}