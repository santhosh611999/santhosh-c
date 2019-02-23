#include <stdio.h>
#include <string.h>
main()
{
    char str[50];
    int i=0,c,s=0;
    printf("\nEnter string: ");
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
    printf("\nNumber of special chars are: %d",s);
    getch();
}
