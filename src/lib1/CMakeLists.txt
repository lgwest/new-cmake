project(lib1)
add_library(lib1 lib1.cpp lib1.h)
add_library(mylib::lib1 ALIAS lib1)
target_include_directories(lib1 PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
)