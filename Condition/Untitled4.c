#include<stdio.h>
void main(){
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    if(a>0 && b>0 && c>0 && sum>0 && sum<=180){
        printf("Yes");
    } else{
        printf("No");
    }
}
