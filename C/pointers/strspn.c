#include<stdio.h>
#include<string.h>

int main()
{

        char* str1="helloo";
        char* str2="loh";
 //      int result;

 //       result=search(str1,str2);



        printf("count = %d\n",strspn(str1,str2));
        return(0);
}

