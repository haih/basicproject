#include "define.h"
#include "coroutine.h"


int main(int argc, char* argv[])
{
    //   Initialize Google's logging library.
    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir="../log/";
    // int num_cookies = 9;          // ...
    INFOTRACE()<<LOG_TEST <<"This is the log test";
    LOG(INFO) << "google::InitGoogleLogging bin path=" << argv[0];
    char* pTest = NULL;
    cout<<"test status = "<<STATUS_BEGIN<<endl;
    ASSERT_RETURN(pTest,-1);
    return 0;
}


























