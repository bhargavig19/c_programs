/*macro to test and set a bit position in a numberi*/

#include<stdio.h>

#define bit_ts(num,pos) (((num & (1<<pos))==0)?(num|(1<<pos)):(num))

int main(void)
{
	int res,num,pos;
	printf("Enter the number and pos to set bit\n");
	scanf("%d %d",&num,&pos);
	res = bit_ts(num,pos);
	printf("After setting the bit the number is %d\n",res);
	return(0);
}

