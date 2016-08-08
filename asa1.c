#include<stdio.h>
void main()
{
int n,i=1,fact=1;
printf("enter any number\n");
scanf("%d",&n);
while(i<=5)
{
fact=fact*i;
i++;
}
printf("%d",fact);
}