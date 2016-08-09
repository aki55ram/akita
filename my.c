#include<stdio.h>
void main()
{
int n,a,b=0;
printf("enter any number\n");
scanf("%d",&n);
while(n>0)
{
a=n%10;
b=a+(b*10);
n=n/10;
}
printf("Reversed number is %d",b);
}