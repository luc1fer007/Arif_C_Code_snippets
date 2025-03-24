#include<stdio.h>
int main(){
    int a;
    printf("Enter a: ");  ///How to check natural number or not..
    scanf("%d",&a);

    if (a>=1 && a>0){
        printf("Its a natural number");

    }
    else{
        printf("Its not a natural number");
        return 0;
    }
}