#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
void my_func(int no)
{
	if(no==SIGINT)
	{
		printf("I have get SIGINT\n");
	}
	else if(no==SIGQUIT)
	{
		printf("I have get SIGQUIT\n");
	}
}
int main()
{
	printf("Waiting for signal\n");
	signal(SIGINT,my_func);
	signal(SIGQUIT,my_func);
//	pause();
//	sleep(2000);
	while(1)
	{
		
	}
	printf("Finished\n");
}
