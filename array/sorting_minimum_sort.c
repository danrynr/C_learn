#include <stdio.h>

int main() {
    int i;
    int Tab[] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int min;
    int k, temp;

    size_t n = sizeof(Tab); /*ambil jumlah indeks "9"*/
    size_t m = sizeof(Tab) / sizeof(int); /*ambil jumlah element pada array "10"*/

    for (i = 0; i < n; i++) {
        min = i;
        for (k = i+1; k < m; k++) {
            if (Tab[k] < Tab[min]) {
                min = k;
            }
        }

        temp = Tab[i];
        Tab[i] = Tab[min];
        Tab[min] = temp;
    }
    for (i = 0; i < m; i++) {
        printf(" %d ; ", Tab[i]);
    }

    return 0;
}