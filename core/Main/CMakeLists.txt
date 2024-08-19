add_library(Main "")

target_sources(Main
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/ProjMain.cpp

    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/ProjMain.h
)

target_include_directories(Main PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)