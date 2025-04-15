cmake_minimum_required(VERSION 3.10)
project(OnScreenAnnotationApp)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 REQUIRED COMPONENTS Widgets)


set(CMAKE_AUTOMOC ON)


add_executable(OnScreenAnnotationApp
    main.cpp
    ui/TransparentCanvas.cpp

)

target_include_directories(OnScreenAnnotationApp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/ui
    ${CMAKE_CURRENT_SOURCE_DIR}/input
    ${CMAKE_CURRENT_SOURCE_DIR}/draw
    ${CMAKE_CURRENT_SOURCE_DIR}/settings
    ${CMAKE_CURRENT_SOURCE_DIR}/utils
    ${CMAKE_CURRENT_SOURCE_DIR}/app
)

target_link_libraries(OnScreenAnnotationApp Qt5::Widgets)
