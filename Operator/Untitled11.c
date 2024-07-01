#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int firstValue = (a+b)<=80 && c>=0;
    int secondValue = (a-b)==0|| c!=0;
    int thirdValue = a!=b || !(b<c)&& c>0;
    int fourthValue = (a!=b||!(b<c))&& c>0;

    printf("1) %d\n",firstValue);
    printf("2) %d\n",secondValue);
    printf("3) %d\n",thirdValue);
    printf("4) %d\n",fourthValue);
}
