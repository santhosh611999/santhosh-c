#include<stdio.h>
void main()
{
int fnum,snum;
printf("Enter an fnum :");
scanf("%d",&fnum);
printf("Enter an snum :");
scanf("%d",&snum);
for(int i=fnum;i<=snum;i++)
{
    if(i%2==0)
    {
        printf("Even numbers are %d \n",i);
    }
}
}
   
