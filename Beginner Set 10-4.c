#include<stdio.h>
void main()
{
int num,s,j,pos;
int a[100];
printf("Enter an size :");
scanf("%d",&s);
for(int i=0;i<s;i++)
{
  scanf("%d",&a[i]);
}
printf("Enter position :");
scanf("%d",&pos);
printf("At %d",a[pos-1]);
}
