#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    printf("X++: %d\n",x++);
    x--;
    printf("++X: %d\n",++x);
    x--;
    printf("X--: %d\n",x--);
    x++;
    printf("--X: %d\n",--x);
}
