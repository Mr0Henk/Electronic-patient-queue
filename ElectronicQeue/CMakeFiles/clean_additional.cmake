# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Queue_SVP_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Queue_SVP_autogen.dir\\ParseCache.txt"
  "Queue_SVP_autogen"
  )
endif()
