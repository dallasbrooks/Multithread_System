add_library(Utility "")

target_sources(Utility
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/WaitDelegate.cpp

    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/WaitDelegate.h
)

target_include_directories(Utility PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)