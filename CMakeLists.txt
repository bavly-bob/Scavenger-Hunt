cmake_minimum_required(VERSION 3.16)

project(ScavengerHunt VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        ui/GameWindow.cpp
        ui/GameWindow.h
        ui/GameWindow.ui
        ui/MainMenu.cpp
        ui/MainMenu.h
        ui/GameScreen.ui
        ui/GameOver.ui
        core/include/Game.h core/src/Game.cpp
        core/include/GameObject.h core/src/GameObject.cpp
        core/include/Entity.h core/src/Entity.cpp
        core/include/Map.h core/src/Map.cpp
        gameplay/include/Player.h gameplay/src/Player.cpp
        gameplay/include/Enemy.h gameplay/src/Enemy.cpp
        gameplay/include/Target.h gameplay/src/Target.cpp
        gameplay/include/Obstacle.h gameplay/src/Obstacle.cpp
        gameplay/include/PowerUp.h gameplay/src/PowerUp.cpp
        systems/include/ScoreManager.h systems/src/ScoreManager.cpp
        systems/include/GameStateManager.h systems/src/GameStateManager.cpp
        systems/include/DifficultyManager.h systems/src/DifficultyManager.cpp
        utils/Enums.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ScavengerHunt
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET ScavengerHunt APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(ScavengerHunt SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(ScavengerHunt
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(ScavengerHunt PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_include_directories(ScavengerHunt PRIVATE . core/include gameplay/include systems/include utils ui)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.ScavengerHunt)
endif()
set_target_properties(ScavengerHunt PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS ScavengerHunt
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ScavengerHunt)
endif()

enable_testing()

add_executable(test_game tests/test_game.cpp)
target_include_directories(test_game PRIVATE . core/include gameplay/include systems/include utils ui)

add_executable(test_player tests/test_player.cpp)
target_include_directories(test_player PRIVATE . core/include gameplay/include systems/include utils ui)

add_executable(test_score tests/test_score.cpp)
target_include_directories(test_score PRIVATE . core/include gameplay/include systems/include utils ui)
