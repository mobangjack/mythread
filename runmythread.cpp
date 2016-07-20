#include "mythread.h"
#include <stdio.h>
#include <unistd.h>

void *myThreadFunc1(void* param)
{
	for(int i = 0; i < 100; i++)
	{
		printf("This is thread 1\n");
		//sleep(1);
	}
}

void *myThreadFunc2(void* param)
{
	for(int i = 0; i < 100; i++)
	{
		printf("This is thread 2\n");
		//sleep(1);
	}
}

int main(int argc, char* argv[])
{
	MyThread mythread1(myThreadFunc1, NULL);
	MyThread mythread2(myThreadFunc2, NULL);
	mythread1.join();
	mythread2.join();
}
