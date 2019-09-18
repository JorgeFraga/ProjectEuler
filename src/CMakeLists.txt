add_library(Problems Problems.cpp)

target_sources(
	Problems
	PRIVATE
		Problems.cpp
	PUBLIC
	    ${CMAKE_CURRENT_LIST_DIR}/Problems.h
)

target_include_directories(
    Problems
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )

add_executable(mainApp MainApp.cpp)

target_link_libraries(mainApp Problems)