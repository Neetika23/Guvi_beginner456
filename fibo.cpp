#include<stdio.h>
int main() 
{
   int i,c=0,n;
   int a=0;
   int b=1;
   scanf("%d",&n); 
   printf(n);
   while(c<=n)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
}