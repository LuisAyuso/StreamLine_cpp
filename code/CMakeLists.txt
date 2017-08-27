


add_executable(example main.cpp src/streamline.cpp)

target_include_directories(example 
                            PUBLIC include
                          )

target_link_libraries(example 
                        PRIVATE glbinding nodes
                     )
        
