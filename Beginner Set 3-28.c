#include<stdio.h>
void main() 
{
  int a[100]; 
  int s,i;
 printf("Enter an size of array");
 scanf("%d",&s);
 for(int i=0;i<s;++i)
 {
     printf("Enter value of an array :");
     scanf("%d",&a[i]);
 }
 for(int i=0;i<s;++i)
 {
 printf("Array value is %d and index is %d \n",a[i],&a[i]);
 }
}
