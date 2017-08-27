


add_executable(example main.cpp src/streamline.cpp)

target_include_directories(example 
                        PUBLIC 
                            include)

                        include_directories(${GLBINDING_INCLUDES})


target_link_libraries(example 
                        PRIVATE glbinding)
        
