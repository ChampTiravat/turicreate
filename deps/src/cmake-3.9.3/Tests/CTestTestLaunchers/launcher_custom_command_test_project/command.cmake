if("${TESTID}" STREQUAL "1")
  message("success")
elseif("${TESTID}" STREQUAL "2")
  message(FATAL_ERROR "failure")
endif()