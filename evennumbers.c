#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,b;
printf("enter the two intervals");
scanf("%d %d",&a,&b);
for(n=a;n<=b;n++)
{
if(n%2==0)
printf("the even number is %d",n);
}
return 0;
}
