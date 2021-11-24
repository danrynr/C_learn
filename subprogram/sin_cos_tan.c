#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double param, result_sin, result_cos, result_tan;
    scanf("%lf\n", &param);

    result_sin = sin (param*PI/180);
    result_cos = cos (param*PI/180);
    result_tan = tan (param*PI/180);

    printf("Value of %f have the sin value of %f, cos value of %f, and tan value of %f\n", param, result_sin, result_cos, result_tan);

    return 0;
}