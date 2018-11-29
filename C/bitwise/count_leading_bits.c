/*Program to count the number of leading set and cleared bits*/

#include<stdio.h>

int cnt_leading_set_bits (int num)
{

	int count = 0;
	while(num)
	{
		if((num & (1))>0)
		{
			//printf("%d",num);
			do
			{
				count++;
				num = num>>1;
			//	printf("%d",count);	
			}while((num & 1)!=0); 
		break;
		}
		else
		{	
			num = num>>1;
//			printf("%d\n",num);
		}
	}
	return count;

}

/*
int cnt_leading_cleared_bits (int num)
{
	int count = 0;
	int bits=31;
        while(bits)
        {
                if((num & (1))==0)
                {
                        printf("%d\n",num);
                        do
                        {
                                count++;
                                num = num>>1;
	//                      printf("%d",count);     
   	                }while((num & 1)==0);
       
			break;		
       		 }
     		  else
     		  {
               		 num = num>>1;
       	//       	 printf("%d\n",num);
       		  }
	bits--;
        }
        return count;
}
*/

int main()
{

	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Number of leading set bits is %d\n",cnt_leading_set_bits(num));
	printf("Number of leading cleared  bits is %d",cnt_leading_cleared_bits(num));
	return(0);
}
	
