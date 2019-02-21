#include<stdio.h>
int main()
{
int a,i,flag=0;
printf("enter any number:");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;
}
}
if(flag==1)
printf("no");
else
printf("yes");
return 0;
}
