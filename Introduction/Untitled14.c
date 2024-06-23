#include<stdio.h>
int value = 10;
void main(){
    int value2=value;
    printf("A. Global: %d\n", value);
    int value= 20;
    printf("B. Local: %d\n", value);
    printf("C. Global: %d\n", value2);
}
