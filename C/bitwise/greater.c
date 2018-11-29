#include<stdio.h>

int i;
#define greater(num1,num2,num3) ((num1-num2)>>31)?((num2-num3)>>31)?num3:num2:((num1-num3)>>31)?num3:num1
#define toggle(num,m,n)   for(i=m;i<=(m-n);i++)/
				 

int main( void )
{
	printf("%d",greater(32,25,5));
	printf("%d",toggle(255,5,2));

	return 0;
}
