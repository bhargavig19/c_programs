/* program to search for a given string in a file and print the line where the
string is found along with the line number*/

#include<stdio.h>
#include<string.h>


int main( void )
{
	int a,i=0,flag=0,count=1;
	char str[10];
	FILE*fp = NULL;

	fp = fopen("test1.txt","r+");

	if(fp==NULL)
        {
                printf("File open failed\n");
        }
        else
        {
                printf("File opened successfully\n");
        }

	printf("Enter the string to be searched\n");
	scanf("%s",str);

	
	while((a=fgetc(fp))!=EOF)
	{
		if(a=='\n')
			count++;
//		printf("%c %c\n",a,str[i]);
		if(a==str[i])
		{
			if(i==(strlen(str)-1))
			{
				flag=1;
				break;
			}
			else
			{
				i++;
				continue;
			
			}
		}
		else
		{
			i=0;
		}
		
	}
	
	if(flag==1)
		printf("Word is present in the file at line %d\n",count);
	else
		printf("Word is not present in the file\n");

	fclose(fp);

	return 0;
}
	
	
