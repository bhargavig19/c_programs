/*Program to remove comments from a C file*/

#include<stdio.h>

int main(void)
{
	/*variable declaration*/
	char c;
	FILE * fp = NULL;
	char buffer[100];
	int i=0;
	int j=0;

	fp = fopen("remove1.c","r+");
	
	if(fp==NULL)
	{
		printf("File opened failed\n");
	}
	else
	{
		printf("File opened successfully\n");
	}

	while((c=fgetc(fp))!=EOF)
	{	
	//	printf("%c",c);
	
		if(c=='/')
		{
			c=fgetc(fp);
			if(c=='*')
			{	
				while(((c=fgetc(fp))!='*')&&((c=fgetc(fp))!='/'))
				{
					fseek(fp,SEEK_CUR,-2);
					fputc(' ',fp);
				}
					
			}
			else if(c=='/')
			{
				while((c=fgetc(fp))!='\n');
			}
			else
			{
				printf("%c",c);
				c=fgetc(fp);
				buffer[i]=c;
				i++;
			}
		}
		else
		{
			buffer[i] = c;
			i++;	
			printf("%c",c);
		}
	}
	fclose(fp);
	
//	fp = fopen("remove2.c","w+");
	
//	fseek(fp,j++,SEEK_SET);
	
//	fprintf(fp,"%s",buffer);
	
//	fclose(fp);
	//printf("%s",buffer);
	return 0;
}	
