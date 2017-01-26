# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:57 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(THEORA_IMAGE_TRANSPORT_GENCPP_GEN_H 
  Packet.h 
  theora_image_transport_gencpp_Library.h 
  )

set(THEORA_IMAGE_TRANSPORT_GENCPP_GEN_CPP 
  Packet.cpp
  theora_image_transport_gencpp_BSON.cpp
  theora_image_transport_gencpp_Boost.cpp 
  theora_image_transport_gencpp_Library.cpp 
  )

# dependencies
set(THEORA_IMAGE_TRANSPORT_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( theora_image_transport_gencpp_NML SHARED theora_image_transport_gencpp_NML.cpp theora_image_transport_gencpp_NMLSupport.cpp )
  target_link_libraries(theora_image_transport_gencpp_NML theora_image_transport_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS theora_image_transport_gencpp_NML DESTINATION lib)
endif()

  install(FILES theora_image_transport_gencpp_NML.h DESTINATION gen_include/theora_image_transport)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 1
  # create ros support library
  add_library(theora_image_transport_gencpp_ROS SHARED theora_image_transport_gencpp_ROS.cpp )
  target_link_libraries(theora_image_transport_gencpp_ROS theora_image_transport_gencpp ${RFRAME_LIBS})
  install(TARGETS theora_image_transport_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${THEORA_IMAGE_TRANSPORT_GENCPP_GEN_H} theora_image_transport_gencpp_ROS.h DESTINATION gen_include/theora_image_transport)


# setup make clean files list. NOTE:  theora_image_transport_gencpp_NMLSupport.cpp is not added on purpose!
set(THEORA_IMAGE_TRANSPORT_GENCPP_GEN 
  ${THEORA_IMAGE_TRANSPORT_GENCPP_GEN_CPP}
  ${THEORA_IMAGE_TRANSPORT_GENCPP_GEN_H}  
  theora_image_transport_gencpp_NML.cpp
  theora_image_transport_gencpp_NML.h 
  theora_image_transport_gencpp_ROS.cpp
  theora_image_transport_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${THEORA_IMAGE_TRANSPORT_GENCPP_GEN}")


