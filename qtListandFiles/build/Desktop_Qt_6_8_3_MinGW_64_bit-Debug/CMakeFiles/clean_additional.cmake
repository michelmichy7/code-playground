# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qtListandFiles_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qtListandFiles_autogen.dir\\ParseCache.txt"
  "qtListandFiles_autogen"
  )
endif()
