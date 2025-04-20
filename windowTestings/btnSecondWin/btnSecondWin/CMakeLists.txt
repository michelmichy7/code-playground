cmake_minimum_required(VERSION 3.16)

project(btnSecondWin VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt6 and necessary modules
find_package(Qt6 REQUIRED COMPONENTS Quick Qml)

# Enable Qt's standard project setup for CMake (includes necessary features)
qt_standard_project_setup(REQUIRES 6.8)

# Add your executable
qt_add_executable(appbtnSecondWin
    main.cpp
    backend.cpp
    backend.h
)

# Register the QML module and make the Backend class available
qt_add_qml_module(appbtnSecondWin
    URI btnSecondWin
    VERSION 1.0
    QML_FILES
        guis/main/Main.qml
        guis/gui_2/gui_2.qml
)

# Link the necessary Qt libraries to the project
target_link_libraries(appbtnSecondWin
    PRIVATE Qt6::Quick
    PRIVATE Qt6::Qml
)

# Set properties for the app (macOS/iOS support)
set_target_properties(appbtnSecondWin PROPERTIES
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install target (optional, for deployment)
include(GNUInstallDirs)
install(TARGETS appbtnSecondWin
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
