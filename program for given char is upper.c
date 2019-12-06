// given character is uppercase/lowercase/digit/specialchar
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("Uppercase alphabet");
	else if(ch>=97&&ch<=122)
	printf("Lowercase alphabet");
	else if(ch>=48&&ch<=57)
	printf("Digit");
	else
	printf("Special Character");
	return 0;
}
