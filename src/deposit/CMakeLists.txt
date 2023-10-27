set(LIBRARY_SOURCES "add_deposit.cpp")
set(LIBRARY_HEADERS "add_deposit.hpp")


add_library(${DEPOSIT_LIB} STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS}) 
target_include_directories(${DEPOSIT_LIB} PUBLIC
"./")