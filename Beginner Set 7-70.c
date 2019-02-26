#include<stdio.h>
void main()
{
    int num,p;
    printf("Enter the num");
    scanf("%d",&num);
    if(num<=1000)
    {
      p=2*num;
    }
    else
    {
    printf("Less than 1000");
    }
    printf("%d",p);
}
