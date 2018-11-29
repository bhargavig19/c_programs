#include<stdio.h>

int main( void )
{
	
	FILE* fp = fopen("hi.txt","r");

	char word[10];

	int count=0;

	while(fscanf(fp,"%s",word) != EOF)
	{
		if(strcmp(word,"hi")==0)
			count++;

	}
	printf("%d",count);

	return 0;
}
	
	
