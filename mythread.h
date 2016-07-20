#pragma once

#include <pthread.h>

class MyThread
{
public:
	MyThread(void*(*func)(void*), void* param);
	virtual ~MyThread();
	int getStatus();
	int join();
	int detach();
	int exit();
private:
	pthread_t tid;
	int status;
};

