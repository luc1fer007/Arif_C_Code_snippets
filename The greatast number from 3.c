#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    printf("Enter c : ");
    scanf("%d", &c);

    if (a>b && a>c){
        printf("The greatest number  is : %d \n",a);

    }
    else if(b>a && b>c){
        printf("The greatest number is : %d\n",b);

    }
    else if(a==b==c){
        printf("The numbers are same");

    }
    else{
        printf("Error!! Input a valid Number!!");
    
    }
    return 0;
}


