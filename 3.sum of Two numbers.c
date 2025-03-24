# include<stdio.h>

int main() {
    int a,b;

    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    int sum = a + b;
    printf("Sum of a,b is : %d \n",sum);
    return 0;
}

// Or other way

# include<stdio.h>

int main() {
    int a,b;

    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    
    printf("Sum of a,b is : %d \n", a + b );
    return 0;
}
