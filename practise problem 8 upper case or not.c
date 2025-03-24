#include<stdio.h>
int main(){
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if ('A'<=ch && ch<='Z'){
        printf("Upper case");      ///using their ASCII value 
    } 
    else if('a'<=ch && ch<='z'){    ///&& must be given other wise error"!!
        printf("lower case");    ///Every letter has their own int value
    }  
    else{
        printf("Its not a letter!!");
    }  
    return 0;    


}