#include<stdio.h>
int main(){
    int age;
    printf("Enter age : ");
    scanf("%d",&age);
    if (age<=0){

        printf("Error!! Enter a valid age!!");
    }
    else if(age>=18){

        printf("You are a voter!!");
    }
    else{
        printf("You are not a  voter!");
    }
    return 0;


}


//use ternery operator.... (only for printf(single line) only)

#include<stdio.h>

int main(){
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    (age>=18) ? printf("You are a voter!!"): printf("You are not a voter!");
    return 0;
}