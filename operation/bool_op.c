#include <stdio.h>

int main() {
    int uang = 6000;
    int hujan = 0;
    printf("Uang > 5000 dan tidak hujan: %d \n", (uang > 5000) && (!hujan));

    uang = 6000;
    hujan = 1;
    printf("Uang > 5000 dan tidak hujan: %d \n", (uang > 5000) && (!hujan));

    uang = 5000;
    hujan = 0;
    printf("Uang > 5000 dan tidak hujan: %d \n", (uang > 5000) && (!hujan));

    uang = 4000;
    hujan = 0;
    printf("Uang > 5000 dan tidak hujan: %d \n", (uang > 5000) && (!hujan));

    uang = 5000;
    hujan = 1;
    printf("Uang > 5000 dan tidak hujan: %d \n", (uang > 5000) && (!hujan));

    uang = 4000;
    hujan = 1;
    printf("Uang > 5000 dan tidak hujan: %d \n", (uang > 5000) && (!hujan));
    
    return 0;
}