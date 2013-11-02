#include "define.h"
#include "basethread.h"
#include "coroutine.h"


void* workThread(void* pArg)
{
    if(NULL != pArg)
    {
        return NULL;
    }
  
        cout<<"workThread"<<endl;

    INFOTRACE()<<LOG_RUN<<"work Thread function test~";
   // pthread_exit((void*)pArg);
    return NULL ;
}


int main(int argc, char* argv[])
{
    //   Initialize Google's logging library.
    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir="../log/";
//    int num_cookies = 9;          // ...
//    INFOTRACE()<<LOG_TEST <<"This is the log test";
//    LOG(INFO) << "google::InitGoogleLogging bin path=" << argv[0];

    CBaseThread *pThread = new CBaseThread();
    pThread->Create(workThread);
    pThread->Join();

    return 0;
}


























