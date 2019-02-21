#include<stdio.h>
void main()
{
int s,smallest;
int a[100];
printf("enter array size:");
scanf("%d",&s);
for(int i=0;i<s;i++)
{
    printf("Enter array elements:");
    scanf("%d",&a[i]);
}
smallest=a[0];
for(int j=1;j<=s;j++)
{
    if(smallest>a[j])
    {
        smallest=a[j];
    }
}
printf("smallest element is %d",smallest);
}
