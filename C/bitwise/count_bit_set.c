/*program to count set bits in the given number */

#include<stdio.h>

int powr(int n,int i)
{
	int s = 1;
	
	while(i!=0)
	{
		s = s * n;
		i--;
	}
	
return(s);
}

/*Function to count setbits*/
void  count_bit_set(int num)
{
	int bit,setbit=0,val;
	for(bit = 0;powr(2,bit)<=num;bit++)
	{
		val = num & (1<<bit);
		if(val > 0)
			setbit += 1;
	}
	printf("bit sets is %d\n",setbit);
}

/*Function to count setbits*/
void  count_bit_clear(int num)
{
        int bit,clearbit=0,val;
        for(bit = 0;powr(2,bit)<=num;bit++)
        {
                val = num & (1<<bit);
                if(val == 0)
                        clearbit += 1;
        }
        printf("bit cleared is %d\n",clearbit);
}

		
int main(void)
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	count_bit_set(num);
	count_bit_clear(num);
	return(0);
}

	
