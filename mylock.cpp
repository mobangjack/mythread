#include "mylock.h"

MyLock::MyLock()
{
	pthread_mutex_init( &m_lock, NULL );
}

MyLock::~MyLock()
{
	 pthread_mutex_destroy(&m_lock);
}

void MyLock::lock()
{
	pthread_mutex_lock( &m_lock );
}

void MyLock::unlock()
{
	pthread_mutex_unlock( &m_lock );
}
