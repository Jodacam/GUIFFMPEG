cmake_minimum_required(VERSION 3.10.0)
project(GUIFFMPEG VERSION 0.1.0 LANGUAGES C CXX)

set(wxBUILD_SHARED OFF)
add_compile_definitions(APPLICATION_NAME "GUIFFMPEG")

add_subdirectory(src/lib/wxWidgets)
file(GLOB SOURCES src/frames/*.hpp src/frames/*.cpp)
add_executable(GUIFFMPEG ${SOURCES} src/main.cpp)
target_link_libraries(GUIFFMPEG wx::net wx::core wx::base X11)
IF(LINUX)
    target_link_libraries(GUIFFMPEG X11)
ENDIF(LINUX)