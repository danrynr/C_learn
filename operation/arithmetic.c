#include <stdio.h>

int main() {
    int x = 5;
    int y = 8;

    printf("Ini nilai x + y : %d \n", x + y);
    printf("Ini nilai x - y : %d \n", x - y);
    printf("Ini nilai x * y : %d \n", x * y);
    printf("Ini nilai x / y : %d \n", x / y);
    printf("ini nilai y / x : %d \n", y / x);
    printf("Ini nilai x mod y : %d \n", x % y);

    float a = 5, b = 8;

    printf("Ini nilai a / b : %5.2f \n", a / b);
    printf("Ini nilai b / a : %5.2f \n", b / a);

    int g = 7;

    printf("Ini nilai g + g + g : %d \n", g + g + g);
    printf("Ini nilai g * g + g : %d \n", (g * g) + g);

    return 0;
}