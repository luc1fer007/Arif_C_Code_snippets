#include <stdio.h>
#include <math.h> //for solving root equation..!
int main() {
    float length;
    printf("Enter length : ");
    scanf("%f",&length);
    
    float area = (sqrt(3)/4)*(length*length);
    printf("Area of Equilateral is : %0.4f \n",area);

    return 0;

}