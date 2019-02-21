#include<stdio.h>
void main()
{
	int n,count;
	printf("enter an num : ");
	scanf("%d",&n);
	while(n!=0)
	{
	    n=n/10;
	    count=count+1;
	}
	printf("count %d",count);
}
	
