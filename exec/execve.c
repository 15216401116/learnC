#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char* arg[]={"env",NULL};
	char* envp[]={"PATH=/tmp","USER=lhr",NULL};
	if(fork()==0)
	{
		if(execve("/usr/bin/env",arg,envp)<0)	
		{
			printf("Execve error\n");
		}
	}	
}
