#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;

}