#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks : ");
    scanf("%d",&marks);

    if(marks<30){
        printf("Your grade is C");

    }
    else if (30<=marks && marks<70){
        printf("Your grade is B");
    }
    else if(70<=marks<90){
        printf("Your grade is A");

    }
    else if (90<=marks<=100){
        printf("Your grade is A+");
    }
    return 0;

}