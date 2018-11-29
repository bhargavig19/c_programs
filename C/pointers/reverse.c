/*Program to reverse a given string*/

#include<stdio.h>
#include<string.h>

void reverse_string(char * str)
{
	int i,j,k;
	char str1[100];
	i=0;
	k = strlen(str);
	j=(k-1);	
	while(i<k)
	{
		str1[i]=str[j];
		i++;
		j--;
	}
		
	str1[i]='\0';
	printf("Reversed String = %s\n",str1);

}

int main(void)
{
	char* str = "Global Edge";
	reverse_string(str);
	return(0);
}
