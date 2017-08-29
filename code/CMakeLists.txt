
set(srcs
    main.cpp
    src/streamline.cpp
    src/nodes/image_show_model.cpp
)

qt5_wrap_cpp(streamline_ui_code 
    include/nodes/image_show_model.hpp
)

add_executable(streamline ${srcs} ${streamline_ui_code})

target_include_directories(streamline 
    PUBLIC 
        include
)

target_link_libraries(streamline 
        glbinding 
        nodes
        Qt5::Widgets
        Qt5::Core
)
        
qt5_use_modules(streamline Widgets)
