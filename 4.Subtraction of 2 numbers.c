#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    int substraction = a - b;
    printf("Subtraction of a,b is : %d \n",substraction);
    return 0;
}


// Or other way

#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

     
    printf("Subtraction of a,b is : %d \n",a - b);
    return 0;
}