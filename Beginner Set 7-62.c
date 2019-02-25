#include<stdio.h>
void main()
{
    char n[100];
    int b,count,l;
    printf("Enter :");
    scanf("%s",&n);
    l=strlen(n);
    for(int i=0;i<l;i++)
    {
        if(n[i]=='0' || n[i]=='1')
        {
            b=1;
        }
        else
        {
         b=0;   
        }
    }
    if(b==1)
    {
        printf("YES");    
    }
    else
    {
        printf("NO");
    }   
}
