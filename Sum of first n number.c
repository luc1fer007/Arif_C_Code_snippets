//// Using do-while loop
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    do{
        sum+=i;
        printf("%d \n",sum);
        i++;
    }while(i<=n);
    return 0;
}


// //Using for loop

#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

   int sum=0;
   for(int i=1;i<=n;i++){
    sum=sum+i;            // sum = 0+1 and then continue till n..

   }printf("%d \n",sum);   // its outside to print only one value..
   return 0;
   
   
}


// //Using while loop

#include<stdio.h>
int main(){
    int n;
        printf("Enter Number: ");
        scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i+=1;
    }printf("%d",sum);
    return 0;

}