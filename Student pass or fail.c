
#include<stdio.h>
int main(){
    int number;
    printf("Enter number : ");
    scanf("%d",&number);

    if (number<=100 && number>30){printf("pass");}
    else if (number>=0 && number<=30){printf("fail");}
    else{printf("Wrong input!! Enter number from 0-100 ");}
    return 0;
}

// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter Number : ");
//     scanf("%d",&number);

//     number>=30 ? printf("Pass"):printf("fail");   //Ternary operation works one line only.
    
//     return 0;
// }