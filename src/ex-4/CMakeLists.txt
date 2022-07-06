add_library(rectangle "rectangle.h" "rectangle.c")
add_executable("ex-4.out" "main.c")
target_link_libraries("ex-4.out" PRIVATE rectangle)