/*Given 2 bit positions d and s in a number n, swap the bit values between s and d*/

#include<stdio.h>
#include<stdlib.h>

#define PRINT1 printf("1")
#define PRINT0 printf("0")

/*Function to show bits*/
#if 1
void show_bit(int num)
{
	int i;
	for(i=31;i>=0;i--)
	{
		(num&(1<<i))?PRINT1:PRINT0;
	}

}


/*Function to swap bits*/

int bit_swap(int num,int s,int d)
{
	
	show_bit(num);

	int val1;
	int val2;

	val1 = num & (1<<s);
    val2 = num & (1<<d);
    if(((val1 > 0)&&(val2 > 0))||((val1 == val2)))
    {
    	return(num);
    }
    if(val1 == 0)
	{
        num = num |(1<<s);
    }
    else
	{
        num = num & ~(1<<s);
    }

    if(val2 == 0)
	{
        num = num | (1<<d);
	}
	else
	{
        num = num & ~(1<<d);
    }

	return(num);
}


int main(void)
{
	/*variable declaration*/
	int num;
	int s;
	int d;
	int result=0;

	printf("Enter the number , source bit and destination bits\n");
	scanf("%d %d %d",&num,&s,&d);

	result = bit_swap(num,s,d);
	printf("\nNumber after swapping is %d\n",result);

	return(0);
}
#endif

#if 0

int main()
{
	int x=4;
	int s=2;
	int d=3;
	x = (x & (1<<s))?((x & (1<<d))?x:(x^(1<<s)^(1<<d))):((x & (1<<d))?(x^(1<<s)^(1<<d)):x);
	printf("%d",x);
	}

#endif	
