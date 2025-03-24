#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    int mult=1;                 //int mult will remain 1 for loop..
    for (int i =10;i>=1;i--){      // i-- for decrease statement...
        mult=n*i;
        printf("%d\n",mult);       //print in for loop for showing all the value..

    }
    return 0;
        
    
    
}