/*program to check Endianess of machine */

#include<stdio.h>

int main( void )
{
	int p = 0x6566;
	char c=(char)p;
	
	printf("%d\n%p\n%c\n%p\n",p,&p,c,&c);
	
//	printf("little endian\n");
	return 0;

}

	
