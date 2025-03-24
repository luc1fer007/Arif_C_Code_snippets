/// 1^2+2^2+3^2+....+N^2
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);

    int sum=0;         //sum always 0
    for (int i =1; i<=a; i++){ //i always 1
        sum=(sum+pow(i,2));
    }printf("%d",sum);
    return 0;
}