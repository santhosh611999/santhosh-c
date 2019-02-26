#include<stdio.h>
void main()
{
    int num;
    printf("Enter the num");
    scanf("%d",&num);
   if(num%10==0)
        {
            printf("%d",num);
        }
        else
        {
           do{
               num=num+1;
           }while((num%10)!=0);
           printf("%d",num);
        }
}
