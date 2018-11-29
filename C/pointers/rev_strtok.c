#include<stdio.h>
char *mystrtok(char *,const char*);
int main( void )
{
	char str[50];
	char delim[10];
	char *ptr;
	int i = 0;

	printf("enter the string\n");
	fgets(str,50,stdin);

	printf("enter the delimeter\n");
	fgets(delim,10,stdin);

	ptr = mystrtok(str,delim);

	while(ptr != NULL)
	{
		if(*ptr != '\0')
			printf("token %d = %s\n",i++,ptr);
				
		ptr = mystrtok(NULL,delim);

	}

return 0;
}

char *mystrtok(char *str,const char *delim)
{
	static char *p;
	const char *q;
	
	q  = delim;

	if(p == NULL)
	p = str;


	char *temp = p;

	while(*p)
	{
		while(*delim != *p && *delim)
			delim++;
		
		if(*delim == *p)
		{
			delim = q;
			*p = '\0';
			p++;
//			getchar();
			return temp;
		}
		
		else
		{
			delim = q;
			p++;
		}

	}
/*

	if(*p == '\n')
	{
		*p = '\0';
		return temp;
	}
*/
	return NULL;
}
