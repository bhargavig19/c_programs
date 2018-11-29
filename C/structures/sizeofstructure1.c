
#include<stdio.h>

#if 1
struct frameformat
{
unsigned int version:4;
unsigned int header_length:4;
unsigned int service_type:8;
unsigned int total_length:16;
unsigned short int identification;
unsigned int flags:3;
unsigned int fragment_offset:13;
unsigned int ttl:8;
unsigned int protocol:8;
unsigned short int header_checksum;
unsigned int source_ip_addr;
unsigned int destination_ip_addr;
}frame;

#endif

int main( void )
{
        printf("Size of frame format is %d\n",sizeof(frame));
        return 0;
}

