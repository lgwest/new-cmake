project(lib2)
add_library(lib2 lib2.cpp lib2.h)
add_library(mylib::lib2 ALIAS lib2)
target_include_directories(lib2 PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:include>)
  