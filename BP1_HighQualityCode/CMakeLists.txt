project( BP1_HighQualityCode )

set(SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/HighQualityCode.cpp)

set (HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/HighQualityClass.hpp)

add_executable( ${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES} )

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include )