#include<stdio.h>
int main(){
    int n;
    printf("Enter Number; ");
    scanf("%d",&n);

    int sum=0;
    
    for(int i =1; i<=n;i++){          // Sum and then reverse the numbers
        sum=sum+i;
    }
    printf("%d\n",sum);

   for(int i=n;i>=1;i--){
    printf("%d \n",i);
   }
   return 0;
}

//Another way 

#include<stdio.h>
int main(){
    int n;
    printf("Enter Number; ");
    scanf("%d",&n);

    int sum=0;
    
    for(int i =1, j=n ;i<=n && j>=1;i++,j--){          // Sum and then reverse the numbers
        sum=sum+i;
        printf("%d\n",j);
    }
    printf("%d\n",sum);

    
   return 0;
}

