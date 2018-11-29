/*Program to append string 1 to string 2*/

#include<stdio.h>

/*
char app_str[15];

char* sappend(char* str1,const char* str2)
{
	int i=0;
	int j=0;
	int k=0;

	k = strlen(str1);

    for(i=0;i<k;i++)
    {
         app_str[i] = str2[i];
    }
	while(str1[j]!='\0')
	{
		app_str[i] = str1[j];
		i++;
		j++;
	}
	return app_str;
}
*/

char* sappend(char * dest,const char* src)
{

	char * dest1=dest;
	int k=0;

	while(*dest)
	{
		k++;
		dest++;
	}

	--dest;
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
			
//	printf("%s",dest1);
	
	return dest1;
}


int main(void)
{

	char str1[10];
	char str2[20];

	printf("Enter source string\n");
	fgets(str1,10,stdin);

	printf("Enter destination string\n");
	fgets(str2,10,stdin);	

	printf("After appending string is %s\n",sappend(str2,str1));

	return(0);	

}
