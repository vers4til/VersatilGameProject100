cmake_minimum_required(VERSION 3.10)
project(VersatilGameProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(Headers)

set(HEADERS
        Headers/Ships.h
        Headers/FastShip.h
        Headers/StrongShip.h
        Headers/NormalShip.h
        Headers/Events.h
        Headers/GeneralFunctions.h
        Headers/AbandonedEvent.h
        Headers/AsteroidEvent.h
        Headers/PiratesEvent.h
        Headers/DamagingEvents.h
)

set(SOURCES
        Sources/GeneralFunctions.cpp
        Sources/Events.cpp
        Sources/AbandonedEvent.cpp
        Sources/AsteroidEvent.cpp
        Sources/PiratesEvent.cpp
        Sources/DamagingEvents.cpp
)

add_executable(VersatilGameProject ${SOURCES} main.cpp)
