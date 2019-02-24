#include <stdio.h>
#include <string.h>
 void main()
{
        int temp=0,n,nextterm;;
        printf("\nEnter num: ");
    scanf("%d",&n);
    int temp1=0;
    int temp2=1;
     printf("num %d '\n'",temp1);
    printf("num %d '\n'",temp2);
       for(int i=1;i<n;i++)
    {
      nextterm=temp1+temp2;
      temp1=temp2;
      temp2=nextterm;
       printf("num %d '\n'",nextterm);
    }
}
