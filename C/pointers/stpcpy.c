/*copy a string returning a pointer to its end*/

#include<stdio.h>


char* stpcopy(char* dbuf,const char* sbuf)
{

    while((*dbuf++ = *sbuf++));

    return (dbuf);

}

int main()
{

    char dbuf[12];
    char sbuf[12];

    printf("Enter the string to copy\n");
    fgets(sbuf,15,stdin);

	stpcopy(dbuf,sbuf);

    printf("The copied string is %s",dbuf);

    return(0);
}

