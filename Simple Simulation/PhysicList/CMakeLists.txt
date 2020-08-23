configure_file(H4PhysicList.hpp
  ${CMAKE_BINARY_DIR}/include/H4PhysicList.hpp
)

file(GLOB SOURCES H4PhysicList.cpp)
add_library(physics_list ${SOURCES})
