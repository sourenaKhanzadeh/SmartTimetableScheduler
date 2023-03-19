cmake_minimum_required(VERSION 3.5)
project(SmartTimetableScheduler
        VERSION 0.1.0
    DESCRIPTION "Smart Timetable Scheduler"
    LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

cmake_policy(SET CMP0079 NEW)


add_subdirectory(src)


target_include_directories(${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/src"
    "${PROJECT_SOURCE_DIR}/lib/elements/lib/include"
)