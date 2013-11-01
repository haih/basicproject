#include "basethread.h"

CBaseThread::CBaseThread() : m_threadid(0)
{
}

int CBaseThread::Create()
{
    int iRet;
    iRet = pthread_create(&m_threadid,NULL,ThreadCallback,this);
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
    return 0;
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