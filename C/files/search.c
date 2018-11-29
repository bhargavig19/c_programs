#include<stdio.h>
#include<string.h>

int main(void)
{
    int a;
    int i=0;
	char str[]="am";
	len = strlen(str);
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

    while(((a=fgetc(fp))!=EOF)&&(str[i]!='\0'))
    {
        	if(str[i]==a)
			{
				c++;
			}
			
				
            //printf("%c\n",a);
            fseek(fp,i++,SEEK_SET);
            
    }
    fclose(fp);

    return 0;
}

