#include<stdio.h>
#include<string.h>
//void * memcpy(void * dest,void * src,size_t n)
//{
	


int main( void )
{
	char  dest[10];
	char  src[10];
	
	printf("Enter string\n");
	fgets(src,10,stdin);

	memcpy(dest,src,5);
	
	printf("%s",dest);

	return 0;
}
