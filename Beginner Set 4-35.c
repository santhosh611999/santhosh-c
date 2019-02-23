#include <stdio.h>
#include <string.h>
main()
{
    char str[50];
    int i=0,count;
    printf("\nEnter numeric: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >='0'&&str[i]<='9')
        {
            count++;
        }
            i++;
    }
    printf("\nNumber of numeric chars are: %d",count);
    getch();
}
