/*program to change all upper case to lower case in a given text file*/

#include<stdio.h>

int main(void)
{
	/*variable declaration*/
	int a;
	int i=0;
	FILE *fp = NULL;

	fp = fopen("test1.txt","r+");
	if(fp==NULL)
	{
		printf("File open failed\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	
	/*Logic to convert case*/	
	while((a=fgetc(fp))!=EOF)
	{
		//	printf("%c\n",a);				
			if((65<=a)&&(a<=90))
			{
				a = a+32;
			}
			//printf("%c\n",a);
			fseek(fp,i++,SEEK_SET);
			fprintf(fp,"%c",a);
	}

	fclose(fp);	
	
	return 0;
}

