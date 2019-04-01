#include<stdio.h>
#include<math.h>
void main()
{
int p,t,r,si,fvalue;
printf("Enter value :");
scanf("%d%d%d",&p,&t,&r);
si=((p*r*t)/100);
fvalue=floor(si);
printf("%d",fvalue);
}
