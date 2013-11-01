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
class CBaseThread
{
public:
    /*
    constructor & destructor
    */
    CBaseThread();
    virtual ~CBaseThread();
    virtual int Create();
    virtual int  Join();
    
    
private:
    pthread_t m_threadid;
    
};

#endif