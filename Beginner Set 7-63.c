#include<stdio.h>
void main()
{
    int num[100],smallest;
    for(int i=0;i<10;i++)
    {
        printf("Enter :");
        scanf("%d",&num[i]);
    }
    smallest=num[0];
    for(int i=1;i<10;i++)
    {
            if(smallest>num[i])
            {
                smallest=num[i];
            }
        }
     printf("%d",smallest);
    
}
