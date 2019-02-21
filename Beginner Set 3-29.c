#include<stdio.h>
void main()
{
int min,hr;
printf("enter minute");
scanf("%d",&min);
hr=min/60;
min=min%60;
printf("%d\t%d",hr,min);
29
