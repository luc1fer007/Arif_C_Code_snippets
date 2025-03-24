#include<stdio.h>
int main() {
    int num;
    printf("Enter num : ");
    scanf("%d",&num);
    printf("%d",num %2==0);  //modulus works for int only!! 
                           //if out put comes 0(False) or 1(True)
    return 0;
}