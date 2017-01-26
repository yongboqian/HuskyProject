# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:56 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(DRIVER_BASE_GENCPP_GEN_H 
  ConfigString.h 
  ConfigValue.h 
  SensorLevels.h 
  driver_base_gencpp_Library.h 
  )

set(DRIVER_BASE_GENCPP_GEN_CPP 
  ConfigString.cpp
  ConfigValue.cpp
  SensorLevels.cpp
  driver_base_gencpp_BSON.cpp
  driver_base_gencpp_Boost.cpp 
  driver_base_gencpp_Library.cpp 
  )

# dependencies
set(DRIVER_BASE_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( driver_base_gencpp_NML SHARED driver_base_gencpp_NML.cpp driver_base_gencpp_NMLSupport.cpp )
  target_link_libraries(driver_base_gencpp_NML driver_base_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS driver_base_gencpp_NML DESTINATION lib)
endif()

  install(FILES driver_base_gencpp_NML.h DESTINATION gen_include/driver_base)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 3
  # create ros support library
  add_library(driver_base_gencpp_ROS SHARED driver_base_gencpp_ROS.cpp )
  target_link_libraries(driver_base_gencpp_ROS driver_base_gencpp ${RFRAME_LIBS})
  install(TARGETS driver_base_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${DRIVER_BASE_GENCPP_GEN_H} driver_base_gencpp_ROS.h DESTINATION gen_include/driver_base)


# setup make clean files list. NOTE:  driver_base_gencpp_NMLSupport.cpp is not added on purpose!
set(DRIVER_BASE_GENCPP_GEN 
  ${DRIVER_BASE_GENCPP_GEN_CPP}
  ${DRIVER_BASE_GENCPP_GEN_H}  
  driver_base_gencpp_NML.cpp
  driver_base_gencpp_NML.h 
  driver_base_gencpp_ROS.cpp
  driver_base_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${DRIVER_BASE_GENCPP_GEN}")


