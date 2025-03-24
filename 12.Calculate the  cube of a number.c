#include<stdio.h>
int main() {
    float num;

    printf("Enter num : ");
    scanf("%f",&num);

    printf("Cube of the %0.3f is : %0.3f \n",num, (num*num*num)); // Warning!! let(%0.nf) is used to print the value after 0 and its also necessary to print the "complete the print statement"
    return 0;  
}