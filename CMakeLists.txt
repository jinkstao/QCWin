CMAKE_MINIMUM_REQUIRED(VERSION 3.13)

PROJECT(MyQt5Project)

# Init Qt
SET(CMAKE_AUTOMOC ON) # For meta object compiler
SET(CMAKE_AUTORCC ON) # Resource files
SET(CMAKE_AUTOUIC ON) # UI files

# Find the QtWidgets library
FIND_PACKAGE(Qt5 REQUIRED core widgets)

#LINK_DIRECTORIES(src)

SET(EXECUTABLE_OUTPUT_PATH bin)
SET(LIBRARY_OUTPUT_PATH lib)

ADD_EXECUTABLE(${PROJECT_NAME} WIN32 "")
ADD_SUBDIRECTORY(resource)

# Add Main Module
ADD_SUBDIRECTORY(src)

ADD_SUBDIRECTORY(include)
INCLUDE_DIRECTORIES(include)

TARGET_LINK_LIBRARIES(${PROJECT_NAME} Qt5::Widgets)

SET(CMAKE_BUILD_TYPE Release)
