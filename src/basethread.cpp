#include "basethread.h"

CBaseThread::CBaseThread() : m_threadid(0)
{
}

//create the thread,
int CBaseThread::Create(THREAD_CALLBACK pCallback)
{
    int iRet;
    iRet = pthread_create(&m_threadid,NULL,pCallback,NULL);
    if(0 != iRet)
    {
        INFOTRACE()<<LOG_ERROR<<"can not create failed~";    
    }
    return iRet;
}


int CBaseThread::Join()
{
    int err;
    err = pthread_join(m_threadid,NULL);
    return err;
}

void* CBaseThread::ThreadCallback(void* pArg)
{
    if(NULL == pArg)
    {
        return NULL;
    }
    cout<<"ThreadCallback"<<endl;
    INFOTRACE()<<LOG_RUN<<"ThreadCallback function test~";
   // pthread_exit((void*)pArg);
    return NULL ;
}