#include<stdio.h>
void main(){
    float x,y;
    scanf("%f %f",&x,&y);
    printf("Addition: %f\n",x+y);
    printf("Subtraction: %f\n",x-y);
    printf("Multiplication: %f\n",x*y);
    printf("Quotient: %f\n",x/y);
    printf("Remainder: %d\n",(int)x%(int)y);
}
