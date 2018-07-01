project (app_so C)

set (SRC main.c)

add_executable (${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME}
			   PRIVATE ../ta/include
			   PRIVATE ../so
			   PRIVATE include)
			   
link_directories (PRIVATE ../so)

target_link_libraries (${PROJECT_NAME} 
               PRIVATE teec
               PRIVATE so)

install (TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
