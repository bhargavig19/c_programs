#include<stdio.h>
#include<string.h>
/*

int search(char * str1,char * str2)
{
	int r=0;

        while((*str1 != '\0')&&(*str2 != '\0'))
        {
	while(*str2 != '\0')
	{
                if(*str1 == *str2)
                {
			r+=count(str1,*str1);		
                }
                else
                {
                        str2++;
                }

        }
	str1++;
	}
	
return r;

}
*/

int mstrspn(const char*str1,const char *str2)
{
	int s=0;
	const char * str=str2;
	int len = strlen(str1);
	int c=0;

	while(*str2 && c!=len)
	{
		if(*str1==*str2)
		{
			str1++;
			str2=str;
			s++;
		}
		else
		{
			str2++;
			c++;
		}
	}
		
	return s;	
}	



int main()
{

        char* str1="helloo";
        char* str2="lho";
	
        printf("count = %d\n",mstrspn(str1,str2));
        return(0);
}

