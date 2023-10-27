set(LIBRARY_SOURCES "withdraw_money.cpp")
set(LIBRARY_HEADERS "withdraw_money.hpp")


add_library(${WITHDRAW_LIB} STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS}) 
target_include_directories(${WITHDRAW_LIB} PUBLIC
"./")