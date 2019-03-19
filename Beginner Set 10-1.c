#include <stdio.h>
void main()
{
	int l,b,h,ts,volume;
	scanf("%d %d %d",&l,&b,&h);
	volume=l*b*h;
	ts=2*((l*b)+(b*h)+(h*l));
	printf("volume=%d\n",volume);
	printf("TSA=%d",ts);
}
