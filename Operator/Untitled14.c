
#include<stdio.h>
#include<math.h>
void main(){
    float x;
    scanf("%f",&x);
    int a = ceil(x);
    int b = floor(x);
    float c = (x < 0)? x*-1:x;
    printf("A = %d",a);
    printf("B = %d",b);
    printf("C = %f",c);
}
