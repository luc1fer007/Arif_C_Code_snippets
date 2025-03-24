# include<stdio.h>

int main() {
    int a,b;

    printf("Enter a :");
    scanf("%d",&a);
                                                     
    printf("Enter b :");
    scanf("%d",&b);

    
    printf("Division of a,b is : %d \n", a / b );

    return 0;
}


// or other way    This is for only a,b not equall to 0 only


// Warning !!!!In c programming there is only 1 (main()) function remember that!!!!!

# include<stdio.h>

int main() {
    int a,b;

    printf("Enter a :");
    scanf("%d",&a);
                                                     
    printf("Enter b :");
    scanf("%d",&b);



    int division = a / b;
    printf("Division  of a,b is : %d \n", division);

    return 0;
}
