#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int multiplication = x;
    multiplication *= y;
    int division = x;
    division/=y;
    printf("Multiplication: %d\n",multiplication);
    printf("Division: %d",division);
}
