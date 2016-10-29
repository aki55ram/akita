#inclde<stdio.h>
void main() 
{ 
char s[20],tmp; 
int i,j; 
scanf("%s',&s); 
for(i=0;i<strlen(s);i+=2) 
{ 
tmp=s[i+1]; 
s[i]=s[i+1]; 
s[i+1]=tmp; 
} 
printf("%d",s); 
}