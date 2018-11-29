/*Program to find the size of structure of the frame format*/

#include<stdio.h>

//#pragma pack(2)

#if 1
struct frameformat
{
unsigned short int source_port;
unsigned short int destination_port;
unsigned int sequence_num;
unsigned int ack_num;
unsigned int Header_length:4;
unsigned int Reserved:6;
unsigned int code_bits:6;
unsigned short int window;
unsigned short int checksum;
unsigned short int urgent;
//union
//{
//	unsigned int options;
//}a;
}frame;

#endif

int main( void )
{
	printf("Size of frame format is %d\n",sizeof(frame));
	return 0;
}
