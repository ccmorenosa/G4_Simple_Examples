configure_file(H4PrimaryGenerator.hpp
  ${CMAKE_BINARY_DIR}/include/H4PrimaryGenerator.hpp
)

file(GLOB SOURCES H4PrimaryGenerator.cpp)
add_library(primary_generator ${SOURCES})
