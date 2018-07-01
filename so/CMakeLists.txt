project (so C)

set (SRC so.c)

add_library (${PROJECT_NAME} SHARED ${SRC})

target_include_directories(${PROJECT_NAME}
			   PRIVATE ../ta/include
			   PRIVATE include)

target_link_libraries (${PROJECT_NAME} PRIVATE teec)

install (TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR})
