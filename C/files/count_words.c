/*Program to count number of words in a text file*/

#include<stdio.h>

int main(void)
{
	/*variable declarartion*/
	FILE * fp;
	char c;
	int count=0;	
	char* str;

	fp = fopen("count.txt","r");
	
	if(fp == NULL)
	{
		printf("\nFile opening failed\n\n");
	}
	else
	{
		printf("\nFile opened successfully\n\n");
	}
	
	#if 1
	/*logic to count number of words*/
	while((c=fgetc(fp))!=EOF)
	{
		//	printf("%c",c);
		if((c=='\n')||(c=='\t')||(c==' '))
		{
			count++;
			while((c=fgetc(fp))==' ');
		}
		
	}
	#endif
	

	printf("The number of words in a file are %d\n\n",count);

	return 0;
}	
