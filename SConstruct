# --------------------------------- #
# Scons Compiler Script             #
# version 1.03                      #
# 11/13/2012                        #
#                                   #
# INSTRUCTIONS                      #
# 1. Using scons to compile         #
# 2. scons -Q to filter the not-    #
#   important information           #
# 3. scons -c to clean project      #
# --------------------------------- #

#env=Environment(CCFLAGS = ['-g', '-std=c++0x'], 
#                ENV = os.environ, 
#                CPPPATH=INC_DIR,
#                LIBPATH=LIB_DIR,
#                LIBS=['pthread']
#                )
#env.VariantDir('./obj/','./src/',duplicate=0)
#env.Program('./bin/test_co', [Glob('./obj/unitest/test_co.cpp'),Glob('./obj/common/*.cpp'),Glob('./obj/engine/*.cpp')])
#env.Program('./bin/test_co_mt', ['./obj/unitest/test_co_mt.cpp','./obj/common/Coroutine.cpp'])
#env.Program('./bin/test_co', ['./obj/unitest/test_co.cpp','./obj/common/Coroutine.cpp'])
#env.Program('./bin/test_event', [Glob('./obj/unitest/test_event.cpp'),Glob('./obj/common/*.cpp'),Glob('./obj/engine/*.cpp')])
VariantDir('./obj/','./src/',duplicate=0)
engine_env=Environment(CCFLAGS = ['-std=c++0x','-g','-Wall'], 
       #         ENV = os.environ, 
                CPPPATH= './src/',
		LIBS=['glog','pthread']
                )
engine_env.Program('./bin/basicproject', [Glob('./obj/*.cpp')])

