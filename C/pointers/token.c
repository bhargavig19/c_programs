#include<stdio.h>
//#include <string.h>
char str[100];

char *strtok(char *str,  char *delim)
{
	char* ptr;//=str;
	char* d=delim;
	static char* prev;
	if(str==NULL)
		str=prev;	
	ptr=str;
//	printf("String = %s\n",str);
	while(*str)
	{
		
		delim=d;
		while(*delim)
		{

			if(*str==*delim)
			{
				*str='\0';
				str++;
				prev=str;
//				printf("str-%s\n",prev);
				return ptr;
			}
			else
			{
				delim++;
			}
		}
//		--delim;
		str++;
	}

	return NULL;
}


int main(void)
{
	
	char* delim=".,:";	
//	char str[10];
	char* res;
	printf("Enter string\n");
	fgets(str,10,stdin);

	res = strtok(str,delim);
//	printf("%s\n",res);
	while(res != NULL)
	{
		printf("The tokens are %s \n",res);
//		printf("%s\n",str);
		res = strtok(NULL,delim);
	}

	return 0;
}


	

