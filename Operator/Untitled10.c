#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int aValue = (a+b)<=80;
    int bValue = !(a+b);
    int cValue = c!=0;
    printf("a) %d\n",aValue);
    printf("b) %d\n",bValue);
    printf("c) %d\n",cValue);
}
