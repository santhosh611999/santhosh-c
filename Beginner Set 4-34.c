#include <stdio.h>
#include <string.h>
main()
{
    char str[50];
    int i=0,count;
    printf("\nEnter para: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == '.')
        {
            count++;
        }
            i++;
    }
    printf("\nNumber of para: %d",count+1);
    getch();
}
