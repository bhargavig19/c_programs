/*Program that checks for the substring sstr in str and if found removes the substring sstr in string str and returns the modified string str. If the substring sstr is not found, it returns the original string str.
*/

#include<stdio.h>

/*Function to check if substring is present or not*/
char *remsstr(char *str1,  char *r1)
{	
	char *str=str1;
	char *r=r1;
	int i=0,j=0,k=0,l=0;
	int flag=0;

	i=l;
	while(str[i]!='\0')
	{
//		j=0;
//		printf("%d %d",i,j);		
		if(str[i]==r[j])
		{	
			while(r[j]!='\0')
			{
				if(str[i]==r[j])
				{
					flag=0;
//					printf("%c %c",str[i],r[j]);
					i++;
					j++;
				}
				else
				{
					j=0;
					i=++l;
					flag=1;
					break;
				}
			}
		if(flag==0)
			break;
		}
		else
		{
			i++;
		}
	}
	if(flag==0)
	{
		//printf("i=%d\nj=%d\nk=%d\n",i,j,(i-j));
		printf("The substring is found\n");
		k=(i-j);
		while(str[i]!='\0')
		{
			str[k++]=str[i++];
			
		}
		str[k++]='\0';
			
//		printf("%s",str);
		return str;
	}
	else
	{
		printf("The substring is not found\n");
	}
	return str;
}


int main(void)
{
	char str[15];
	char sstr[15];

	printf("Enter the string\n");
	scanf("%s",str);
	
	printf("Enter the substring\n");
//	fgets(sstr,15,stdin);
	scanf("%s",sstr);

	printf("The string after removal of substring is %s\n",remsstr(str,sstr));

	return 0;
}
