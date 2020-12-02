add_library(person SHARED person.cpp)

# 由于add.so仅仅被person使用，并且不对外暴露接口，我们可以用PRIVATE，
# 当我们改成INTERFACE/PUBLIC时，使用person库的目标可以正确引用到add库的头文件和库文件
target_include_directories(person PRIVATE ../add)
target_link_directories(person PRIVATE ../add)
target_link_libraries(person PRIVATE add)

# print.so没有被person使用，使用INTERFACE仅仅暴露头文件，
# 当为PRIVATE时，会构建失败，因为print.h的头文件和库文件路径没有暴露出去
target_include_directories(person INTERFACE ../print)
target_link_directories(person INTERFACE ../print)
target_link_libraries(person INTERFACE print)