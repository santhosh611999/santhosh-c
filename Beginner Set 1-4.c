#include<stdio.h>
#include<string.h>
void main() {
    char a;
   printf("Enter an either character or digit :");
   scanf("%c",&a);
      if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
      {
           printf("alphabet");
       }
       else
       {
           printf("not");
       }
       } 
