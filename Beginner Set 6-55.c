#include <stdio.h>
int main(void) {
int num,num1,num2;
printf("enter the number");
scanf("%d%d",&num1,&num2);
num=num1*num2;
if(num%2==0)
{
    printf("EVEN");
}
else{
    printf("ODD");
}
return 0;
}
