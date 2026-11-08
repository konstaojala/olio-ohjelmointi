cmake_minimum_required(VERSION 3.19)
project(h1 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(h1
    main.cpp
)

target_link_libraries(h1
    PRIVATE
        Qt::Core
)

install(TARGETS h1
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
