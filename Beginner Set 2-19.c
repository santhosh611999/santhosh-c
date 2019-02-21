#include<stdio.h>
void main()
{
int num,j=1;
printf("Enter an num :");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    j=i*j;
}
printf("factorial is %d",j);
}
   
