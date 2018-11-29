/*Program to append string 1 to string 2 upto n character*/

#include<stdio.h>

/*
char app_str[15];

char* nappend(char* str1,char* str2,int n)
{
        int i=0;
        int j=0;
        int k;
        k = strlen(str2);
        for(i=0;i<k;i++)
        {
                app_str[i] = str2[i];
        }
        app_str[i]='\0';
        while(j<n)
        {
              app_str[i]=str1[j];
		i++;
		j++;
        }
		app_str[i]='\0';

        return app_str;

}
*/


char* nappend(char * dest,const char* src,int n)
{

    char * dest1=dest;
    int k=0;
	int c=0;

    while(*dest)
    {
        k++;
        dest++;
    }

    --dest;
    while(*src && c<=n)
    {
        *dest = *src;
        dest++;
        src++;
		c++;
    }
	*--dest='\0';

    return dest1;
}




int main(void)
{
        char str1[10];
        char str2[20];
		int n;

		printf("Enter source string\n");
    	fgets(str1,10,stdin);

   		printf("Enter destination string\n");
   		fgets(str2,10,stdin);

		printf("Enter number of characters\n");
		scanf("%d",&n);


        printf("After appending string is %s\n",nappend(str1,str2,n));

        return(0);

}
      
