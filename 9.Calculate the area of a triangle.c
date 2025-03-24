#include<stdio.h>
int main() {
    float height,width;

    printf("Enter height : ");
    scanf("%f",&height);

    printf("Enter width : ");
    scanf("%f",&width);
    

   float area = 0.5*height*width;

    printf("Value of area of triangle is : %f \n", area);
    return 0;
}