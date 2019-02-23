#include <stdio.h>
#include <string.h>
main()
{
    char str[50];
    int i=0,c,s=0;
    printf("\nEnter nymeric: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >='0'&&str[i]<='9'||str[i] >='a'&&str[i]<='z'||str[i] >='A'&&str[i]<='Z'||str[i] ==' ')
        {
            c++;
        }
        else
        {
            s++;
        }
            i++;
    }
    printf("\nNumber of numeric chars are: %d",s);
    getch();
}
