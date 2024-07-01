#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

void main(){
    double x;
    scanf("%lf", &x);

    // Convert x from degrees to radians
    double x_rad = x * (PI / 180.0);

    // Calculate the value of the equation
    double result = 2 * pow(cos(x_rad), 2) - sqrt(3) * sin(x_rad) + log(x / 2);

    // Print the result
    printf("%.6f\n", result);
}
