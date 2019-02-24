#include<stdio.h>
void main() 
{
    int a[100];
int num,s,j,smallest,largest;
printf("Enter array size :");
scanf("%d",&s);
for(int i=0;i<s;i++)
{
    printf("Enter values :");
    scanf("%d",&a[i]);
}
largest=a[0];
for(int i=1;i<=s;i++)
{
    if(largest<a[i])
    {
        largest=a[i];
    }
}
printf("largest value is %d \n",largest);
smallest=a[0];
for(int j=1;j<=s;j++)
{
    if(smallest>a[j])
    {
        smallest=a[j];
    }
}
printf("smallest value is %d",smallest);
}
