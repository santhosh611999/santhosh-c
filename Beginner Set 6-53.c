#include <stdio.h>
int main(void) {
int sum=0,num,rem,t;
printf("enter the number");
scanf("%d",&num);
t=num;
while(t!=0)
{
    rem=t%10;
    sum=sum+rem;
    t=t/10;
}
     
printf("%d",sum);
return 0;
}
