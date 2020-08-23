configure_file(H4Actions.hpp
  ${CMAKE_BINARY_DIR}/include/H4Actions.hpp
)

file(GLOB SOURCES H4Actions.cpp)
add_library(actions ${SOURCES})

target_link_libraries(actions primary_generator)
