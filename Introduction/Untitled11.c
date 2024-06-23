#include<stdio.h>
void main(){
    unsigned int unsignedIntValue = 4294967295U;
    unsigned long int unsignedLongIntValue = 4294967295UL;
    unsigned long long int unsignedLongLongIntValue = 18446744073709551615ULL;
    unsigned short int unsignedShortIntValue = 65535;

    printf("The unsigned int value: %u\n", unsignedIntValue);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue);
    printf("The unsigned short int value: %hu\n", unsignedShortIntValue);
}
