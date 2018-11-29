/*Program to toggle even bits and odd bits respectively in a given
number */

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


int even_bit_toggle (int num)
{
	int bit;
	 for(bit=0;powr(2,bit)<=num;bit+=2)
        {
                num = num ^ (1<<bit);
        }
return(num);
}


int odd_bit_toggle (int num)
{
        int bit;
         for(bit=1;powr(2,bit)<=num;bit+=2)
        {
                num = num ^ (1<<bit);
        }
return(num);
}


int main(void)
{

	int num,i;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("After toggling even bits number is %d\n",even_bit_toggle(num));
	printf("After toggling odd bits number is %d\n",odd_bit_toggle(num));
return(0);
}
