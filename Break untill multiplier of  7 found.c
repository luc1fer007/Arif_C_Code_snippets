#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter Number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7==0){               // multiple of 7...
            break;
        }

    }while(1);                 // 1 means True 
    printf("Thank You!!");
    return 0;
}