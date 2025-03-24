#include<stdio.h>
int main(){
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    switch(number){
        case 1:printf("Its Sunday");
        break;
        case 2:printf("Its Monday");
        break;
        case 3:printf("Its Tuesday");
        break;
        case 4:printf("Its Wednesday");
        break;
        case 5:printf("Its Thursday");
        break;
        case 6:printf("Its Friday");
        break;
        case 7:printf("Its Saturday");
        break;

        default: printf("Error!!");

        
        return 0;
    }
}