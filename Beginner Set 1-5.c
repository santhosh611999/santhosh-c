#include <stdio.h>
void main()
{
    int a,b,c;
   printf("Enter an number ");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b)
   {
       printf("Greater value is %d",a);
   }
   else if(a>c)
   {
       printf("Greater value is %d ",a);
   }
   else if(b>c)
   {
       printf("Greater value is %d",b);
   }
   else
   {
       printf("Greater value is %d",c);
   }
}
