set(EXE_SOURCES "main.cpp")

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})
target_link_libraries(${EXECUTABLE_NAME} PUBLIC 
${MENU_LIB}
${BALANCE_LIB}
${DEPOSIT_LIB})
