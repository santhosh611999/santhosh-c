#include<stdio.h>
void main()
{
    int num1,num2,p;
    printf("Enter the num");
    scanf("%d%d",&num1,&num2);
    p=num1+num2;
    if(p%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
