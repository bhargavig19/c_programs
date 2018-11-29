#include<stdio.h>

char * strfry(char *str)
{
	char * str1=str;

	while(*str++)
	{
		*str = *str + (rand()%5);
	}
	printf("%s",str1);	
return str1;
}


int main(void)
{
	char str[10];
		
	printf("Enter the string\n");
	fgets(str,10,stdin);

	printf("Anagram of string is %s\n",strfry(str));

	return 0;
}
