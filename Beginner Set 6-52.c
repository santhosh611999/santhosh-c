#include <stdio.h>
int main(void) {
int n;
printf("enter the number");
scanf("%d",&n);
switch(n)
{
    case 1:
    printf("ONE");
    break;
    case 2:
    printf("TWO");
    break;
    case 3:
    printf("THREE");
    break;
    case 4:
    printf("FOUR");
    break;
    case 5:
    printf("FIVE");
    break;
    case 6:
    printf("SIX");
    break;
    case 7:
    printf("SEVEN");
    break;
    case 8:
    printf("EIGHT");
    break;
    case 9:
    printf("NINE");
    break;
    case 10:
    printf("TEN");
    break;
    default:
    printf("Invalid");
}
return 0;
}
