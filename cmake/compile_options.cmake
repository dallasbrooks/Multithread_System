set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_C_FLAGS_DEBUG "-O0 -g2 -DDEBUG")
set(CMAKE_C_FLAGS_MINSIZEREL "-Os -g0 -DNDEBUG")
set(CMAKE_C_FLAGS_RELEASE "-O3 -g0 -DNDEBUG")
set(CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g2 -DPDEBUG")

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g2 -DPDEBUG")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -g0 -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -g0 -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g2 -DDEBUG")