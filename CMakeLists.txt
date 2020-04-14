cmake_minimum_required(VERSION 3.15)

project(miniaudio VERSION 0.10.2 LANGUAGES C)

set(CMAKE_BUILD_TYPE Release)

add_library(miniaudio SHARED
    extras/dr_flac.h
    extras/dr_mp3.h
    extras/dr_wav.h
    extras/stb_vorbis.c
    miniaudio.c
)

set_target_properties(miniaudio PROPERTIES
    PREFIX ""
    VERSION ${PROJECT_VERSION}
    SOVERSION 0
    PUBLIC_HEADER miniaudio.h
)

#if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
#    install(TARGETS miniaudio
#        RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}\\..\\..\\sources\\TACDevel.Audio\\lib\\win-x64)
#elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
#    install(TARGETS miniaudio
#        LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../../sources/TACDevel.Audio/lib/osx-x64)
#else()
#    install(TARGETS miniaudio
#        LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../../sources/TACDevel.Audio/lib/linux-x64)
#endif()