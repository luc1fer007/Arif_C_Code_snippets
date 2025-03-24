//avarage of 3 numbers
#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter a : ");
    scanf("%f",&a);

    printf("Enter b : ");
    scanf("%f",&b);

    printf("Enter c : ");
    scanf("%f",&c);

    float avarage = (a+b+c)/2;
    printf("Avarage of the is : %0.2f", avarage);
    return 0;
}