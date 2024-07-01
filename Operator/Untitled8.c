#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int maxNum = (x>y)?x:y;
    printf("Max: %d",maxNum);
}
