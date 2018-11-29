/*Program to create a array of 10 elements of following structure and write to a info.db file*/

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
	struct EH st[2];
	int i;	
	FILE * fp = NULL;

	fp = fopen("info.db","w+");
	
	if(fp==NULL)
		printf("File opening failed\n\n");
	else
		printf("File opened successfully\n\n");

//	printf("Enter the structure indent,type,machine,version,entry\n");
	
	for(i=0;i<2;i++)
	{
		printf("Enter the structure indent,type,machine,version,entry for structure %d\n\n",i+1);

		scanf("%s",(st[i].e_ident));
		scanf("%hi",&(st[i].e_type));
		scanf("%hi",&(st[i].e_machine));
		scanf("%d",&(st[i].e_version));
		scanf("%d",&(st[i].e_entry));
	}

	fwrite(st,sizeof(st),5,fp);
	
	fclose(fp);
	return 0;
}

