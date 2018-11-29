#include<stdio.h>

//#define swap(num,m,n) (((num>>m)&1)^((num>>n)&1))?(num&(1<<n))?(num=num&~(1<<n))|(1<<m):(num=num&~(1<<m)|(1<<n)):num
#define swap(num,m,n) (((num>>m)&1)^((num>>n)&1))?num^(1<<n)^(1<<m):num
#define swap1(num,m,n) ((num=num|(1<<m))&~(1<<n))
#define s(num) ((~(((~0)<<8))&num)<<24 | (~(((0xffffffff)>>8))&num)>>24) | (((0x0000ff00&num)<<8) | ((0x00ff0000&num)>>8))
//#define clear_right_bit (num&~(1<<0))
//#define set_right_bit (num | (1<<0))

int main()
{
// 	int num,m,n;
/*	printf("Enter number\n");
	scanf("%d",&num);	
	printf("Enter m number\n");
	scanf("%d",&m);
	printf("Enter n number\n");
	scanf("%d",&n);
//	printf("After clearing rightmost bit, the number is %d",clear_right_bit);
	printf("%d",swap(num,m,n));

*/

	int n=0x12345678;

	printf("%x",s(n));	
	return(0);
}

	
