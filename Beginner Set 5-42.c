#include<stdio.h>
#include<string.h>
void main() 
{
char s1[100],s2[100];
int l1,l2;
printf("Enter  the string:");
scanf("%s%s",&s1,&s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1>l2)
{
    printf("%s",s1);
}
else
{
    printf("%s",s2);
}
}
