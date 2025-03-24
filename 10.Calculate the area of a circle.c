#include<stdio.h> //include<conio.h> is not supported in vs code!!
int main() {
    float radius;
    printf("Enter radius : ");
    scanf("%f",&radius);

    float pi = 3.1416;

    float area = pi *(radius*radius);
    printf("Area of circle : %f \n", area); //0.4 means i have taken the value of pi 0.1416 value!!!
    return 0; //getch() is not supported in vs code!!

}

