#include <stdio.h>
#include <string.h>
main()
{
    char str[50];
    int i=0, space=0;
    printf("\nEnter Your String: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            space++;
        }
            i++;
    }
    printf("\nNumber of words: %d",space);
    getch();
}
