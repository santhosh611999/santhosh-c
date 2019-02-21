#include<stdio.h>
void main() 
{
  int temp,num1,num2;
 printf("Enter two numbers");
 scanf("%d%d",&num1,&num2);
 temp=num1;
 num1=num2;
 num2=temp;
printf("Swapping of two num is %d and %d",num1,num2);
}
