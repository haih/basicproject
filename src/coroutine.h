/*-------------------------------------
 event handle vitural machine                        
 Coroutine.h  
 
 Author                                              
 hai                               
 History                                              
 8/29/2013  v1.0                                 
-------------------------------------*/

#ifndef COROUTINE_H
#define COROUTINE_H

#include "define.h"

enum EStatus
{   
   STATUS_BEGIN = 0,
   STATUS_RUN ,
   STATUS_YEILD,
   STATUS_FINISHED
};

class Coroutine
{
public:
   
    
private:
    char*         m_stack;
    UINT32      m_stack_size;
//    ucontext_t  m_context;
//    ucontext_t  m_caller;
//    ucontext_t  m_callee;
        

};

#endif
