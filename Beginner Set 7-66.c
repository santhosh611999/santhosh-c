#include<stdio.h>
void main()
{
    int num,c;
    printf("Enter");
    scanf("%d",&num);
    for(int i=2;i<=num-1;i++ )
    
    {
        if(num%i==0)
        { 
            c=1;
        }
    }
    if(c==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}
