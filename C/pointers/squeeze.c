/*Program to squeeze characters*/

#include<stdio.h>

int main(void)
{
	char str[] = "gllloobbaaalll";
	int i,j,k;
	j=0;
	i=0;
	k=0;
	while(str[i]!='\0')
	{		
		if(str[i]==str[i+1])
		{
			j=i+1;
			while(str[j]!='\0')
			{
				str[j]=str[j+1];
				j++;
			}
			str[j]='\0';
			
		}
		else
		{
			i+=1;
		}
	
	}
	printf("%s",str);
	return 0;
}
