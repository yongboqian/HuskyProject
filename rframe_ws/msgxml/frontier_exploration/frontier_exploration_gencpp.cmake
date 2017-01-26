# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:30:54 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(FRONTIER_EXPLORATION_GENCPP_GEN_H 
  ExploreTaskAction.h 
  ExploreTaskActionFeedback.h 
  ExploreTaskActionGoal.h 
  ExploreTaskActionResult.h 
  ExploreTaskFeedback.h 
  ExploreTaskGoal.h 
  ExploreTaskResult.h 
  Frontier.h 
  GetNextFrontierRequest.h 
  GetNextFrontierResponse.h 
  GetNextFrontier.h 
  UpdateBoundaryPolygonRequest.h 
  UpdateBoundaryPolygonResponse.h 
  UpdateBoundaryPolygon.h 
  frontier_exploration_gencpp_Library.h 
  )

set(FRONTIER_EXPLORATION_GENCPP_GEN_CPP 
  ExploreTaskAction.cpp
  ExploreTaskActionFeedback.cpp
  ExploreTaskActionGoal.cpp
  ExploreTaskActionResult.cpp
  ExploreTaskFeedback.cpp
  ExploreTaskGoal.cpp
  ExploreTaskResult.cpp
  Frontier.cpp
  GetNextFrontierRequest.cpp
  GetNextFrontierResponse.cpp
  GetNextFrontier.cpp
  UpdateBoundaryPolygonRequest.cpp
  UpdateBoundaryPolygonResponse.cpp
  UpdateBoundaryPolygon.cpp
  frontier_exploration_gencpp_BSON.cpp
  frontier_exploration_gencpp_Boost.cpp 
  frontier_exploration_gencpp_Library.cpp 
  )

# dependencies
set(FRONTIER_EXPLORATION_GENCPP_GEN_DEPS actionlib_msgs_gencpp geometry_msgs_gencpp std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( frontier_exploration_gencpp_NML SHARED frontier_exploration_gencpp_NML.cpp frontier_exploration_gencpp_NMLSupport.cpp )
  target_link_libraries(frontier_exploration_gencpp_NML frontier_exploration_gencpp 
	actionlib_msgs_gencpp_NML geometry_msgs_gencpp_NML std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS frontier_exploration_gencpp_NML DESTINATION lib)
endif()

  install(FILES frontier_exploration_gencpp_NML.h DESTINATION gen_include/frontier_exploration)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 14
  # create ros support library
  add_library(frontier_exploration_gencpp_ROS SHARED frontier_exploration_gencpp_ROS.cpp )
  target_link_libraries(frontier_exploration_gencpp_ROS frontier_exploration_gencpp ${RFRAME_LIBS})
  install(TARGETS frontier_exploration_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${FRONTIER_EXPLORATION_GENCPP_GEN_H} frontier_exploration_gencpp_ROS.h DESTINATION gen_include/frontier_exploration)


# setup make clean files list. NOTE:  frontier_exploration_gencpp_NMLSupport.cpp is not added on purpose!
set(FRONTIER_EXPLORATION_GENCPP_GEN 
  ${FRONTIER_EXPLORATION_GENCPP_GEN_CPP}
  ${FRONTIER_EXPLORATION_GENCPP_GEN_H}  
  frontier_exploration_gencpp_NML.cpp
  frontier_exploration_gencpp_NML.h 
  frontier_exploration_gencpp_ROS.cpp
  frontier_exploration_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${FRONTIER_EXPLORATION_GENCPP_GEN}")


