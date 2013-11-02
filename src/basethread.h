/*-------------------------------------
base  thread  in the server                       
basethread.h  
 
 Author                                              
 Hai Hu                               
 History                                              
 10/30/2013  v1.0                                 
-------------------------------------*/

#ifndef BASETHREAD_H
#define  BASETHEAD_H

#include "define.h"
#include <pthread.h>

typedef pthread_t THREAD_HANDLE;

typedef void* (*THREAD_CALLBACK)(void* );

class CBaseThread
{
public:
    /*
    constructor & destructor
    */
    CBaseThread();
    virtual ~CBaseThread()
    {}
    virtual int Create(THREAD_CALLBACK pCallback);
    virtual int  Join();
    static void* ThreadCallback(void* pArg);
    
private:
    pthread_t m_threadid;
    
};

#endif