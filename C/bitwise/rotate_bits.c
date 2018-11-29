/*Program to left and right rotate the bits*/

#include<stdio.h>

/*Function to find left rotation*/

unsigned int left_rotate_bits (unsigned int num,int j,int bits)
{
	int val;
	int pos=0;
	int i;

	for(i=0;i<j;i++)
	{
       		 val = num & (1<<(bits-1));
       		 //printf("%d",val);
       		 if(val>0)
       		 {
                	num = num << 1;
                	num = num & ~(1<<(bits));
       		 //     num = num << 1;
               		num = num | (1<<pos);
       		 }
        	 else
        	 {       num = num << 1;
        	         //printf("%d",num);
        	 }
	}
	return num;
}

/*Function to find right rotation*/

unsigned int right_rotate_bits (unsigned int num,int j,int bits)
{
        int val;
        int pos=0;
        int i;

        for(i=0;i<j;i++)
        {
                 val = num & (1);
                 //printf("%d",val);
                 if(val>0)
                 {
                        num = num >> 1;
                 //     num = num & ~(1<<(pos));
                 //     num = num << 1;
                        num = num | (1<<(bits-1));
                 }
                 else
                 {       num = num >> 1;
                         //printf("%d",num);
                 }
        }
        return num;
}



int main(void)
{
	int num;
	int bits;
	int j;

	printf("Enter the number and number of rotation\n");
	scanf("%d %d",&num,&j);
	printf("Enter the bits");
	scanf("%d",&bits);

	printf("After left rotating it %d times the number is %d\n",j,left_rotate_bits(num,j,bits));
	printf("After right rotating it %d times the number is %d\n",j,right_rotate_bits(num,j,bits));
	
	return(0);
}





