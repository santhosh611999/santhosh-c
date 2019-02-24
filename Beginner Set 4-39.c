#include<stdio.h>
void main() 
{
  int a[100]; 
  int i,temp,largest;
 for(int i=0;i<10;++i)
 {
    printf("Enter value of an array :");
    scanf("%d",&a[i]);
 }
 for(int i=0;i<10;++i)
 {
     for(int j=i+1;j<10;++j)
     {
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
 }
 largest=a[0];
for(int i=1;i<=10;++i)
{
  if(largest<a[i])
    {
     largest=a[i]; 
    }
}
   printf("largest element is %d",largest);
}
