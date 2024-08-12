qt_add_executable(helloworld
    helloworld.cpp
)

target_link_libraries(helloworld PRIVATE Qt6::Widgets)
set_target_properties(helloworld PROPERTIES
    WIN32_EXECUTABLE ON
)