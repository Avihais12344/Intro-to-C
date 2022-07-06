add_library(point "point.h" "point.c")
target_precompile_headers(point PUBLIC
<math.h>)
# Link the math library.
target_link_libraries(point PRIVATE m)
add_executable("ex-3.out" "main.c")
target_link_libraries("ex-3.out" PUBLIC point)