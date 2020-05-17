project(myapp)

add_executable(myapp main.cpp)
target_link_libraries(myapp mylib::lib1 mylib::lib2)
