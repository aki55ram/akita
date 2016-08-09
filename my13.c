#include<stdio.h>
void main()
{
char ch;
while(1)
{
printf("Enter any Roman Number\n");
scanf("%s",&ch);
switch(ch)
{
case 'I':
printf("1");
break;
case 'II':
printf("2");
break;
case 'III':
printf("3");
break;
case 'IV':
printf("4");
break;
case 'V':
printf("5");
break;
case 'VI':
printf("6");
break;
case 'VII':
printf("7");
break;
case 'VIII':
printf("8");
break;
case 'IX':
printf("9");
break;
case 'X':
printf("10");
break;
default:
printf("Wrong Option \n");
}
}
}