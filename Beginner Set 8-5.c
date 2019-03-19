#include <stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,temp;
    scanf("%s",a);
    n=strlen(a);
    if(n%2!=0)
      {
          temp=n/2;
          a[temp]='*';
          printf("%s",a);
      }
      else
      {
          temp=n/2;
          a[temp]='*';
          a[temp-1]='*';
          printf("%s",a);
      }
}
