#include <stdio.h>
int main(void) {
    int a[100];
int s,v,count=0;
printf("Enter size :");
scanf("%d",&s);
printf("Enter value :");
scanf("%d",&v);
for(int i=0;i<s;i++)
{
    printf("Array value :");
    scanf("%d",&a[i]);
}
for(int i=0;i<s;i++)
{
  if(a[i]==v)
  {
    count=1;
  }
}
if(count==1)
{
    printf("YES");
}
else
{
    printf("NO");
}
return 0;
}
