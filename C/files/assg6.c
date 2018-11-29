/*program to read info.db which contains the information written in the
assignment 5 and print the content of the file*/

#include<stdio.h>

struct EH {
unsigned char e_ident[16];
short e_type;
short e_machine;
int e_version;
unsigned int e_entry;
};


int main(void)
{
	/*Variable declaration*/
	FILE * fp = NULL;
	struct EH st[2];	
	int i;

	fp = fopen("info.db","r+");

	if(fp == NULL)
	{
		printf("File not opened\n\n");
	}
	else
	{
		printf("File opened successfully\n\n");
	}
	
	fread(st,sizeof(st),1,fp);
	
	printf("Structure contents are\n");

	for(i=0;i<2;i++)
	{	
		 printf("%s\n",(st[i].e_ident));
     		 printf("%hi\n",(st[i].e_type));
     		 printf("%hi\n",(st[i].e_machine));
     		 printf("%d\n",(st[i].e_version));
	     	 printf("%d\n\n",(st[i].e_entry));
	 	 printf("---------------------\n\n");
	}

	fclose(fp);

	return 0;
}
