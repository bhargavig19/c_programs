/*program to copy the string from sbuf to character buffer dbuf*/

#include<stdio.h>

#if 0
void strcopy(char* dbuf,char* sbuf)
{
	dbuf = sbuf;
	printf("%s",dbuf);

}

int main()
{

	char* sbuf = "Global Edge";
	char* dbuf = NULL;
	
	strcopy(dbuf,sbuf);

	return(0);
}


#endif



#if 0

void strcopy(char * dbuf,char * sbuf)
{
	int i=0;
	while(sbuf[i]!='\0')
	{	
		dbuf[i]=sbuf[i];
		i++;
	}
	dbuf[i]='\0';
	printf("The copied string is %s\n",dbuf);
}

int main()
{
	char sbuf[20];	
	char dbuf[20];

	printf("Enter the string to copy\n");
	fgets(sbuf,15,stdin);

	strcopy(dbuf,sbuf);

	return(0);
}

#endif

#if 1

char* strcopy(char* dbuf,const char* sbuf)
{
	char *d_buf=dbuf;
        while((*dbuf++ = *sbuf++));
	
//      printf("%s",d_buf);
	return d_buf;

}

int main()
{

    char dbuf[12];
    char sbuf[12];

    printf("Enter the string to copy\n");
    fgets(sbuf,15,stdin);
    
    printf("The copied string is %s",strcopy(dbuf,sbuf));

    return(0);
}
#endif




