#include<conio.h>
#include<stdio.h>
int main()
{
int n,a,b;
printf("enter the interval");
scanf("%d %d",&a,&b);
for(n=a;n<=b;n++)
{
if(n%2==1)
printf("the odd number is %d",n);
}
return 0;
}
