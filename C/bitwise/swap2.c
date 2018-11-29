/*Given the bit position s in number snum and the bit position d in number dnum, swap bit values between s and d.*/

#include<stdio.h>
#include<stdlib.h>

#define PRINT1 printf("1")
#define PRINT0 printf("0")

/*Function to show bits*/

void show_bit(int num)
{
        int i;
        for(i=31;i>=0;i--)
        {
                (num&(1<<i))?PRINT1:PRINT0;
        }

}

/*Function to set bit*/

int set_bit(int num, int pos)
{
	num=num|(1<<pos);
	return(num);
}

/*Function to clear bit*/

int clear_bits(int num,int pos)
{
	num=num&~(1<<pos);
	return(num);
}

/*Function to swap bits*/

void swap(int snum,int dnum,int s,int d)
{
	int  val1;
	int val2;
        int r1;
	int r2;

	val1 = snum & (1<<s);
        val2 = dnum & (1<<d);
        if(((val1 > 0)&&(val2 >0))||(val1 == val2)){
        printf("%d\n%d\n",snum,dnum);
        exit(0);
        }
        if(val2 == 0)
        {
                r1=set_bit(dnum,d);
        }
        else{
                r1=clear_bits(dnum,d);
        }

        if(val1  == 0)
        {
                r2=set_bit(snum,s);
        }
        else{
                r2=clear_bits(snum,s);
        }
        printf("After swapping\n%d\n%d\n",r1,r2);

}

int main(void)
{
	int snum;
	int dnum;
	int s;
	int d;
	
	printf("Enter the source number \n");
	scanf("%d",&snum);
	printf("Enter the destination number \n");
	scanf("%d",&dnum);
	printf("Enter the source bit\n");
	scanf("%d",&s);
	printf("Enter the destination bit\n");
	scanf("%d",&d);
	swap(snum,dnum,s,d);
	
	return(0);
}
