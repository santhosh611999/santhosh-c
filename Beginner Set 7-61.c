#include <stdio.h>
int main(void) {
char s[100];
int num,i;
printf("Enter string :");
scanf("%s",&s);
printf("Enter num :");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
    printf("%c",s[i]);
}
return 0;
}
