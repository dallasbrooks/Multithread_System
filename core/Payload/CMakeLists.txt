add_library(Payload "")

target_sources(Payload
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/KeyManager.cpp

    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/KeyManager.h
    ${CMAKE_CURRENT_LIST_DIR}/PayloadRepo.h
)

target_include_directories(Payload PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)