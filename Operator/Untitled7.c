
#include<stdio.h>
void main(){
    int intNum = -150;
    float floatNum = 123.125;

    float intToFloat = intNum;
    int floatToInt = floatNum;

    printf("Assignment: %f assigned to an int produces %d\n",floatNum,floatToInt);
    printf("Assignment: %d assigned to a float produces %f\n",intNum,intToFloat);
    printf("Type Casting: (float) %d produces %f\n",intNum,(float)intNum);
    printf("Type Casting: (float) %f produces %d\n",floatNum,(int)floatNum);
}
