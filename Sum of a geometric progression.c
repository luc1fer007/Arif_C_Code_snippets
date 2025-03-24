//3^3+6^3+9^3+....+N^3
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);

    int sum=0;
    for (int i =3;i<=a;i+=3){
        sum=(sum+pow(i,3));     
    }printf("%d\n",sum);
    return 0;
}