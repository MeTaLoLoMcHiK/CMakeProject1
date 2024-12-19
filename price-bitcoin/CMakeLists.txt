project ("price-bitcoin")

file(GLOB SRC "src/*.c")

INCLUDE_DIRECTORIES("include")

add_executable(${PROJECT_NAME} ${SRC})

if (CMAKE_VERSION VERSION_GREATER 3.12)
set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDART 11)
endif()