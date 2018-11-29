/* Program to insert char*/

#include<stdio.h>


char*  insertchar(char * str,const char ch,int pos)
{

	int i=0;
	int j=0;
	int p=(pos-1);
	char *f=str;
	while(*str != '\0')
	{
		j++;
		str++;
	}
//	printf("%d\n",j);
	while(j>(pos))
	{
//	if(j==(pos))
//	{
//	*str = ch;
//	j--;
//	}
//	else{
		*str = *(str-1);
		str--;
		j--;
	}
	*(str)=ch;	
//	printf("%s",f);
	return (f);	
}

int main(void)
{
	char str[10];
	char ch;
	int pos =0;

	printf("Enter the string\n");
	fgets(str,15,stdin);

	printf("Enter the character to be inserted\n");
	scanf("%c",&ch);

	printf("Enter the position at which you want to insert character\n");
	scanf("%d",&pos);

	printf("After inserting string is %s\n",insertchar(str,ch,pos));
	return(0);
}
