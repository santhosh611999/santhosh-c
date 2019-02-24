#include<stdio.h>
void main() 
{
int a[100];
int num,s;
printf("Enter array size :");
scanf("%d",&s);
for(int i=0;i<s;i++)
{
    printf("Enter values :");
    scanf("%d",&a[i]);
}
for(int i=0;i<s;i++)
{
    num=a[i]+a[i+1];
    a[i+1]=num;
    a[i]=a[i+1];
}
printf("Average %d",num/s);
}
