#include<stdio.h> // Using for loop
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int mult=1;
    for(int i =1;i<=10;i++){
        mult=n*i;
        printf("Table of %d is %d*%d : %d\n",n,n,i,mult); /// the more use(%d) the more give serially input..like there n,n,i..!!

    }
    return 0;
    


}



// Using while loop


#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

   int mult=1;
   int i=1;
   while(i<=10){
    mult=n*i;
    printf("Multiplication of %d*%d is: %d\n",n,i,mult); // 1st (%d) is for n and 2nd (%d) is for i..!!
    i++;
   }
    return 0;
}