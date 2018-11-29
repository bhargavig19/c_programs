#include<stdio.h>

#if 1
struct frameformat
{

unsigned char vpi:4;
unsigned char gfc:4;
unsigned char vci:4;
unsigned char vpi1:4;
unsigned char vci1;
unsigned char clp:1;
unsigned char :1;
unsigned char pti:1;
unsigned char :1;
unsigned char vci2:4;
unsigned char hec;

}frame;

#endif

int main( void )
{
        printf("Size of frame format is %d\n",sizeof(frame));
        return 0;
}

