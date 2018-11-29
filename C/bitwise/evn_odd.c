#include<stdio.h>
#define PRINTODD printf("\nOdd number\n")
#define PRINTEVEN printf("\nEven number\n")
#define ODD_EVEN(_num)  (_num&1)?PRINTODD:PRINTEVEN

int main ( void )
{
	int num;

	printf("Enter number:\t");
	scanf("%d",&num);
	
	ODD_EVEN(num);

	return 0;
}
