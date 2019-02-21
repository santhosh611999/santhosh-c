#include<stdio.h>
void main()
{
int s,largest;
int a[100];
printf("enter array size:");
scanf("%d",&s);
for(int i=0;i<s;i++)
{
    printf("Enter array elements:");
    scanf("%d",&a[i]);
}
largest=a[0];
for(int j=1;j<=s;j++)
{
    if(largest<a[j])
    {
        largest=a[j];
    }
}
printf("largest element is %d",largest);
}
