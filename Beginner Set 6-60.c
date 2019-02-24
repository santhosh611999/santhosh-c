#include <stdio.h>
int main(void) {
int num,i,sum=0;
printf("Enter num :");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    sum=i+sum;
}
printf("count %d ",sum);
 return 0;
}
