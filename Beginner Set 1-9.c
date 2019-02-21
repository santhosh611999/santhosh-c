#include<stdio.h>
#define MAX_SIZE 100
void main()
{
	int n,k,m=0;
	int a[MAX_SIZE];
	printf("enter an num : ");
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
	    printf("Enter array values");
	    scanf("%d",&a[i]);
	}
	for(int j=0;j<k;j++)
	{
	    m=a[j]+m;
	}
	 printf("value is %d",m);
}
	
