cmake_minimum_required(VERSION 3.16)

CMAKE_PREFIX_PATH=C:/msys64/mingw64

find_package(Boost REQUIRED COMPONENTS asio)




project(lanNetworking VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(applanNetworking
    main.cpp
)

qt_add_qml_module(applanNetworking
    URI lanNetworking
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES Backend/backend.h Backend/backend.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(applanNetworking PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.applanNetworking
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(applanNetworking
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS applanNetworking
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
