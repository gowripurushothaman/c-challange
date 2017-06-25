#include<stdio.h>
#include<conio.h>
int main()
{
char a[10],b[10];
printf("enter the string which you want to check whether it is palindrom or not");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("it is palindrom");
else 
printf("it is not palindrom");
return 0;
}
