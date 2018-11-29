/*program to initialize the last element in the following union and print the value of other fields.*/

#include<stdio.h>

union sample
{
int a:5;
int b:10;
int c:5;
int d:21;
int e;
};

int main( void )
{
	union sample s;
	s.e=24;
	printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n",s.a,s.b,s.c,s.d,s.e);
	return 0;
}

