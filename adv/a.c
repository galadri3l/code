#include<stdio.h>
#include "spinor.h"
#include<unistd.h>

void main(int argc,char **argv)
{
	execve("/bin/ls",argv,NULL);
}

