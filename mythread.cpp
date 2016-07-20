#include "mythread.h"

MyThread::MyThread(void*(*func)(void*), void* param)
{
	status = pthread_create(&tid, NULL, func, param); 
}

MyThread::~MyThread()
{
	
}

int MyThread::getStatus()
{
	return status;
}

int MyThread:: join()
{
	status = pthread_join(tid, NULL);
	return status;
}
int MyThread::detach()
{
	status = pthread_detach(tid);
	return status;
}

int MyThread:: exit()
{
	if(status != -1)
	{
		pthread_exit(NULL);
		status = -1;
		return 0;
	}
	return -1;
}


