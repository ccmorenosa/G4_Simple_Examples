configure_file(H4Detector.hpp
  ${CMAKE_BINARY_DIR}/include/H4Detector.hpp
)

file(GLOB SOURCES H4Detector.cpp)
add_library(detector ${SOURCES})
