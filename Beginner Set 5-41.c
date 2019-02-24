#include<stdio.h>
#include<string.h>
void main() 
{
char s[100];
int k;
printf("Enter  the string:");
scanf("%s",&s);
printf("Enter  the times:");
scanf("%d",&k);
for(int i=0;i<k;i++)
{
    printf("%s \n",s);
}
}
