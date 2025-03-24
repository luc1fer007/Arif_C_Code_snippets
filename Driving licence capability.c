#include<stdio.h>
int main(){
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    if (age>=18){
        printf("They are voter.\n");
        printf("They can have driving licence!");
        
    
    }
    else{
        printf("They are not eligible for driving licence!!");
    }
    return 0;
}