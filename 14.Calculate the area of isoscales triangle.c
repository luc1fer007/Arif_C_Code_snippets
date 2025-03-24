#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c;
    printf("Enter a :");
    scanf("%f",&a);

    printf("Enter b : ");
    scanf("%f",&b);

    printf("Enter c : ");
    scanf("%f",&c);

    float s = (a+b+c)/2;
    float area1 = (s*(s-a)*(s-b)*(s-c));
    float area2 = sqrt(area1);
    
    printf("Area of the triangle is : %f \n", area2);
    return 0;
}