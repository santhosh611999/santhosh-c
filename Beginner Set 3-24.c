#include<stdio.h>
#include<stdio.h>
void main() 
{
  int a[100]; 
  int s,i,temp;
 printf("Enter an size of array");
 scanf("%d",&s);
 for(int i=0;i<s;++i)
 {
     printf("Enter value of an array :");
     scanf("%d",&a[i]);
 }
 for(int i=0;i<s;++i)
 {
     for(int j=i+1;j<s;++j)
     {
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
         
     }
 }
     for(int i=0;i<s;++i)
     {
     printf("sorted array is %d \n",a[i]);
     }
 
 }
