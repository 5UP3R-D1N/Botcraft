if(NOT TARGET imgui)
    set(IMGUI_DIR ${CMAKE_SOURCE_DIR}/3rdparty/imgui)

    set(IMGUI_SOURCES 
        ${IMGUI_DIR}/imgui.cpp
        ${IMGUI_DIR}/imgui_demo.cpp
        ${IMGUI_DIR}/imgui_draw.cpp
        ${IMGUI_DIR}/imgui_widgets.cpp
        ${IMGUI_DIR}/examples/imgui_impl_glfw.cpp
        ${IMGUI_DIR}/examples/imgui_impl_opengl3.cpp)

    set(IMGUI_HEADERS 
        ${IMGUI_DIR}/imconfig.h
        ${IMGUI_DIR}/imgui_internal.h
        ${IMGUI_DIR}/imstb_rectpack.h
        ${IMGUI_DIR}/imstb_textedit.h
        ${IMGUI_DIR}/imstb_truetype.h
        ${IMGUI_DIR}/imgui.h
        ${IMGUI_DIR}/examples/imgui_impl_glfw.h
        ${IMGUI_DIR}/examples/imgui_impl_opengl3.h)

    add_library(imgui STATIC ${IMGUI_HEADERS} ${IMGUI_SOURCES})
    target_include_directories(imgui PUBLIC ${IMGUI_DIR})
    target_include_directories(imgui PUBLIC ${IMGUI_DIR}/examples)

    target_compile_definitions(imgui PUBLIC IMGUI_IMPL_OPENGL_LOADER_GLAD)
    target_link_libraries(imgui PRIVATE OpenGL::GL glfw glad)
    set_target_properties(imgui PROPERTIES FOLDER 3rdparty)
endif()