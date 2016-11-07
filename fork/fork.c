/*
 * fork.c
 *
 *  Created on: 2016年9月22日
 *      Author: gongjian.lhr
 */
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
	pid_t pid;
	int result=fork();
	if(result<0)
	{
		printf("error\n");

	}
	else if(result==0)
	{
		printf("The returned value is %d,In child process,the pid is %d.\n",result,getpid());


	}
	else if (result>0)
	{
		printf("The returned value is %d,In father process,the pid is %d.\n",result,getpid());
	}

	return 0;
}

