//using while loop..

#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int fact=1;                    //fact never start from 0
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
        
    }printf("%d\n",fact);

    return 0;

}




//using for loop..

#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int fact=1;                  //fact never starts from 0...!
    for(int i =1;i<=n ; i++){
        fact=fact*i;
    }printf("%d\n",fact);
    return 0;
}