#include<stdio.h>
void main(){
    long int longInt = 2147483647;
    long long int longLongInt = 9223372036854775807LL;
    long double longDoubleInt = 1.1E+4932L;
    short int shortInt = 32767;

    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %Le\n", longDoubleInt);
    printf("The short int value: %hd\n", shortInt);
}
