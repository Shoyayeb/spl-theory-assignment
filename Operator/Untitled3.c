
#include<stdio.h>
void main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float part1 = 3.31*a*a+2.01*b*b*b;
    float part2 = 7.16*b*b+2.01*a*a*a;
    printf("X= %f",part1/part2);
}
