cmake_minimum_required(VERSION 3.7)
project(MyCPrograms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        MyCPrograms.xcworkspace/xcuserdata/t_ishikawa.xcuserdatad/xcdebugger/Breakpoints_v2.xcbkptlist
        MyCPrograms.xcworkspace/xcuserdata/t_ishikawa.xcuserdatad/UserInterfaceState.xcuserstate
        MyCPrograms.xcworkspace/contents.xcworkspacedata
        separate_files/separate_files/sort.c)

add_executable(MyCPrograms ${SOURCE_FILES})