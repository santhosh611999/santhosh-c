#include <stdio.h>
int main(void) {
char s[100];
int alpha=0,digit=0;
printf("Enter :");
scanf("%s",&s);
for(int i=0;s[i]!='\0';i++)
{
if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
{
    alpha++;
}
else if((s[i]>='0'&&s[i]<='9'))
    {
        digit++;
    }
}
if(alpha>0&&digit>0)
{
    printf("YES");
}
else
{
    printf("NO");
}
return 0;
}
