//if a number is grater than 9 & less than 100 --true

#include<stdio.h>
int main() {
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    printf("%d",(a>9) && (100>a));
    return 0;
}