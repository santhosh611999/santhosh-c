#include<stdio.h>
void main()
{
	int n,k,m=1;
	printf("enter num : ");
	scanf("%d",&n);
	printf("enter power : ");
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
	    m=n*m;
	}
	printf("power of num is %d",m);
}
	
