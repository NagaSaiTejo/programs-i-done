#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char x[5],y[5];
gets(x);
strcpy(y,x); //strcpy(dest,source);
strrev(x);
printf("x = %s\n",x);
printf("y = %s\n",y);
if(strcmp(x,y)==0)
printf("Palindrome");
else
printf("Not a palindrome");

getch();
return 0;
}
