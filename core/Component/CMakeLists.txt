add_library(Component "")

target_sources(Component
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/EntityBase.cpp

    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/EntityBase.h
)

target_include_directories(Component PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)