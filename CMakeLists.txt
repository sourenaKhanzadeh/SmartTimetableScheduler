cmake_minimum_required(VERSION 3.5)
project(SmartTimetableScheduler
        VERSION 0.1.0
    DESCRIPTION "Smart Timetable Scheduler"
    LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

cmake_policy(SET CMP0079 NEW)

# Elements
add_subdirectory(lib/elements)

add_subdirectory(src)

if (APPLE)
    find_library(COCOA_FRAMEWORK Cocoa)
    find_library(QUARTZ_CORE_FRAMEWORK QuartzCore)
    find_library(CARBON_FRAMEWORK Carbon)
    target_link_libraries(${PROJECT_NAME} PRIVATE cycfi::elements ${COCOA_FRAMEWORK} ${QUARTZ_CORE_FRAMEWORK} ${CARBON_FRAMEWORK})
else()
    target_link_libraries(${PROJECT_NAME} PRIVATE cycfi::elements)
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/src"
    "${PROJECT_SOURCE_DIR}/lib/elements/lib/include"
)