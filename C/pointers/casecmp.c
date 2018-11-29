/*Program to compare two strings without considering case*/

#include<stdio.h>

int stcmp(const char * str1,const char * str2)
{
        while((*str1 != '\0')&&(*str2 != '\0'))
        {
                if((*str1 == *str2)||(*str1+32 == *str2)||(*str1==*str2+32))
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

int main(void)
{

        char str1[10];
        char str2[10];
        int result;

		printf("Enter string 1\n");
		fgets(str1,10,stdin);
	
		printf("Enter string 2\n");
		fgets(str2,10,stdin);

        result=stcmp(str1,str2);

        if(result==0)
                printf("Two strings are equal\n");
        else if(result<0)
                printf("string2 is greater\n");
        else
                printf("String1 is greater\n");

        //printf("%d",result);
        return(0);
}

