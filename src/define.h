#ifndef DEFINE_H
#define DEFINE_H

#include <iostream>
#include <errno.h>
#include <assert.h>
#include <string>
#include <glog/logging.h>
using namespace std;
     
#define LOG_TEST "[LOG_TEST]:"
#define LOG_ERROR "[LOG_ERROR]"
#define LOG_RUN "[LOG_RUN]"


#define INFOTRACE()                                           LOG(INFO) 
#define ASSERT(expr)                                          {if(!(expr)){LOG(ERROR)<<LOG_TEST<<"assert "<<#expr<<" failed!"; assert(expr);} }
#define ASSERT_RETURN_VOID(expr)                {if(!(expr)){LOG(ERROR)<<LOG_TEST<<"assert "<<#expr<<" failed!"; return ;} }
#define ASSERT_RETURN(isReturn,RetValue) \
    if(isReturn)    \
    {   \
        return RetValue;    \
    }


typedef unsigned int UINT32  ;
 
#endif
