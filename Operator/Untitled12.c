#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float x = b * b - 4 * a * c;
    double upperPart = -b / (2*a);
    if(x > 0){
        float sqrtX = sqrt(x);
        float root1 = (-b + sqrtX)/ (2*a);
        float root2 = (-b - sqrtX) / (2*a);
        printf("%.2f %.2f\n",root1,root2);
    } else if(x == 0){
        printf("%.2f\n",upperPart);
    } else{
        float imaginaryPart = sqrt(-x) / (2*a);
        printf("Imaginary\n");
    }


}
