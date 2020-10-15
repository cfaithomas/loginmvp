cmake_minimum_required(VERSION 3.17)
project(loginmvp)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 14)

add_executable(loginmvp main.cpp Utilisateur.cpp Utilisateur.h Presenter.cpp Presenter.h Fenetre.cpp Fenetre.h)
find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)
target_link_libraries(loginmvp Qt5::Core Qt5::Gui Qt5::Widgets)