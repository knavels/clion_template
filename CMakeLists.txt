cmake_minimum_required(VERSION 3.23)
project({{project_name}})

set(CMAKE_CXX_STANDARD 17)
# include_directories("${VCPKG_ROOT}/installed/<path to package A>" , "${VCPKG_ROOT}/installed/<path to package B>")

# find_package(wxWidgets CONFIG REQUIRED)

add_executable({{project_name}} main.cpp)
# target_link_libraries({{project_name}} PRIVATE wx::core wx::base)
