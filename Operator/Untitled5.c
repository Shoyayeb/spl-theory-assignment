#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int increment = x;
    increment+=y;
    int decrement = x;
    decrement-=y;
    printf("Incremented Value: %d\n",increment);
    printf("Decremented Value: %d",decrement);
}
