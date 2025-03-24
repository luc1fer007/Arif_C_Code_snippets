#include<stdio.h>
int main() {
    int height,width;

    printf("Enter height : ");
    scanf("%d",&height);

    printf("Enter width : ");
    scanf("%d",&width);
    

    // int area = height*width;
    // printf("Value of area of rectanguler is : %d \n", (area));

    printf("Value of area of rectanguler is : %d \n", (height*width));
    return 0;
}