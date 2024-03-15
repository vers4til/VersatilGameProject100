cmake_minimum_required(VERSION 3.27)
project(VersatilGameProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(Headers)



add_executable(VersatilGameProject main.cpp
        Headers/Ships.h
        Headers/FastShip.h
        Headers/StrongShip.h
        Headers/NormalShip.h
        Headers/Events.h
        Headers/GeneralFunctions.h
        Sources/GeneralFunctions.cpp
        Sources/Events.cpp
        Sources/Ships.cpp
        Headers/AbandonedEvent.h
        Headers/AsteroidEvent.h
        Headers/PiratesEvent.h
        Sources/AsteroidEvent.cpp
        Sources/AbandonedEvent.cpp
        Headers/DamagingEvents.h
        Sources/PiratesEvent.cpp
        Sources/DamagingEvents.cpp
)
