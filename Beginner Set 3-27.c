#include<stdio.h>
#include<stdio.h>
void main() 
{
    char a[10];
    int i,flag;
    scanf("%s",a);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
           flag=0;
        }
        else
        {
           flag=1;
        }
    }
    if(flag==0)
    {
    printf("Yes");
    }
    else
    {
        printf("No");
    }
}
