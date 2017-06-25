#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,b,i,c=0;
printf("enter the two intervals");
scanf("%d %d",&a,&b);
for(n=a;n<=b;n++)
{
for(i=1;i<=n;i++)
{
if(n%1==0)
c++;
}
if(c==2)
printf("%d ",n);
}
return 0;
}
