#include<stdio.h>
void main()
{
	char p,s;
	scanf("%c %c",&p,&s);
	if(p>s)
		printf("%c is greatest lexicographically",p);
	else if(s>p)
		printf("%c is greatest lexicographically",s);
	else
		printf("Both are equal");
}