#include <stdio.h>
int main(void) {
int num,count=0;
printf("Enter value :");
scanf("%d",&num);
while(num!=0)
{
    num=num/10;
    count=count+1;
}
printf("count %d :",count);
 return 0;
}
