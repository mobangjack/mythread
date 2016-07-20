#pragma once

#include <semaphore.h>

class MyEvent
{
public:
	MyEvent();
	~MyEvent();
	int         post();
	int         wait();
private:
	sem_t		m_sem;
};

