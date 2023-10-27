set(LIBRARY_SOURCES "show_menu.cpp")
set(LIBRARY_HEADERS "show_menu.hpp")


add_library(${MENU_LIB} STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS}) 
target_include_directories(${MENU_LIB} PUBLIC
"./")