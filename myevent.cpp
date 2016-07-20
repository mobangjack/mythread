#include "myevent.h"

MyEvent::MyEvent()
{
	sem_init( &m_sem, 0, 0 );
}

MyEvent::~MyEvent()
{
}

int MyEvent::post()
{
	int ret = sem_post( &m_sem );
	return ret;
}

int MyEvent::wait()
{
	int ret = sem_wait( &m_sem );
	return ret;
}

