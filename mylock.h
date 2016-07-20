#pragma once

#include <pthread.h>

class MyLock
{
public:
	MyLock();
	~MyLock();
	void         lock();
	void         unlock();
private:
	pthread_mutex_t m_lock;
};
