/*Program to copy n characters from character buffer sbuf to character buffer dbuf */

#include<stdio.h>

#if 1
/*
void strncopy(char * dbuf, char *sbuf,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		dbuf[i] = sbuf[i];
	}
	dbuf[i]='\0';
	printf("%s",dbuf);
}
*/


char* strncopy(char * dbuf,const char *sbuf,int n)
{
        int i;
		char * copy_str = dbuf;
        for(i=0;i<n;i++)
        {
                *(dbuf) = *(sbuf);
				dbuf++;
				sbuf++;
        }
        *(dbuf)='\0';
//        printf("The copied string is %s\n",dbuf);
		return copy_str;
}

int main(void)
{
	char sbuf[15] ;
	char dbuf[15] ;
	int n;	

	printf("Enter the string\n");
	fgets(sbuf,15,stdin);

	printf("Enter number of characters to copy\n");
	scanf("%d",&n);
	
	printf("The copied string is %s\n",strncopy(dbuf,sbuf,n));
	return(0);
}
#endif
