/*Program that returns the address of last occurence of a char in a string*/

#include<stdio.h>

char* chr_add_instr(const char * buf,int c)
{
	int i=0;
	int d=0;

	while(*buf)
	{
		buf++;
		d++;
	}
	--buf;
    while(*buf && (i<d))
    {
        if(*buf==c)
            return buf;
        else
            buf--;
			i++;

    }
    return NULL;
}


int main(void)
{

    char * buf;
    char c;
    char * res ;

    printf("Enter the string\n");
    fgets(buf,15,stdin);

    printf("Enter the character\n");
    c=getchar();
//    printf("%c %d",c,c);
    res = chr_add_instr(buf,c);
    printf("Starting address of string is %p\n",buf);
    if(res==NULL)
        printf("Character %c does not exist in string\n",c);
    else
        printf("Address of last occurence of %c is %p\n",c,res);
    return(0);
}


