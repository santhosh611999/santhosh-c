#include<stdio.h>
void main() 
{
  int a,b;
printf("Enter  A value :");
scanf("%d",&a);
printf("Enter  B value :");
scanf("%d",&b);
a=a^b;
b=a^b;
a=a^b;
printf("A value is %d:",a);
printf("B value is %d:",b);
}
