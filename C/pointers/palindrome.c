/*Program to check if a string is palindrome or not*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char str[20]="maddam";
	int i,j,k;
	k=strlen(str);	
	for(i=0,j=(k-1);i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			printf("Strings are not palindrome\n");
			exit(0);
		}
	}
	printf("String is palindrome\n");
	return(0);
}
		

