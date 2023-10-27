set(LIBRARY_SOURCES "check_balance.cpp")
set(LIBRARY_HEADERS "check_balance.hpp")


add_library(${BALANCE_LIB} STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS}) 
target_include_directories(${BALANCE_LIB} PUBLIC
"./")