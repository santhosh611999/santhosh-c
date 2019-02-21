#include<stdio.h>
void main()
{
int num,temp,sum,rem;
printf("Enter an num :");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
 rem=temp%10;
 sum=sum+(rem*rem*rem);
 temp=temp/10;
}
if(sum==num)
{
    printf("Yes");
 }
else
{
    printf("No");
}
}
   


















