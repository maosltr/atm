set(LIBRARY_SOURCES "show_menu.cpp")
set(LIBRARY_HEADERS "show_menu.hpp")


add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS}) 
target_include_directories(${LIBRARY_NAME} PUBLIC
"./")