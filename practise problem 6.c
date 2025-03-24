//check if the character is digit or not..
#include<stdio.h>
int main() {
    char a;
    printf("Enter a : ");
    scanf("%c",&a);

   if (a>='a' && a<='z'){
    printf("Its not a digit its a lowcase lette");
   }
   else if (a>='A' && a<='Z'){
    printf("Its not digit its a upcase letter");
   }
   else{
    printf("Its a digit");
    return 0;
   }
}