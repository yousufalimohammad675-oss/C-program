#include<stdio.h>
int main ()
{
 int a,n,result;
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter shift position:");
 scanf("%d",&n);
 result=a>>n;
 printf("Right shift Result=%d",result);
 return 0;
}
