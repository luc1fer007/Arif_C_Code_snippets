#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char result[50];
    scanf("%[^\n]s",result);
    int i;
    float j;double k;char name[50];
    sscanf(result,"%d %f %lf %[^\n]s",&i,&j,&k,&name);
    printf("%d %f %lf %s\n",i,j,k,name);
    return 0;
}