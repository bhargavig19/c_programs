/*Program to check whether rstr is a rotated string of str*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strlen1(char* str)
{
	int len=0;
	char * str1=str;
	while(*str1)
	{
		len++;
		str1++;
	}
//	printf("%d",len);
	return len;
}

int stcmp(char * str1,char * str2)
{
        while((*str1 != '\0')&&(*str2 != '\0'))
        {
                if(*str1 == *str2)
                {
                        str1++;
                        str2++;
                }
                else
                {
                        if(*str1 > *str2)
                                return 1;
                        else
                                return -1;
                }

        }

        if((*str1 == '\0')&&(*str2 == '\0'))
                return 0;
        else if(*str1 == '\0')
                return -1;
        else
                return 1;

}


int strrot1(char *str, char *rstr)
{
	int i=0;
	int j=0;
	int len = strlen(str);
	char temp[len];
	char ch;
	
	/*Logic a rotate string*/
	while(j<len)
	{
		i=0;
		ch=str[0];
	    while(str[i]!='\0')
	    {
			temp[i]=str[i+1];
			if(i==(len-1))
			{	
				temp[i]=ch;
			}
			i++;
	    }
		str=temp;

		/*To compare both the strings*/
		if(stcmp(str,rstr)==0)
		{	
			return 1;
		}

		j++;
	}
	return 0;
}


int main(void)
{
	char * str = "abcd";
	char * rstr = "cdab";
	
	if(strrot1(str,rstr))
		printf("It is a rotated string\n");
	else
		printf("It is not a rotated string\n");
						
	return 0;
}
