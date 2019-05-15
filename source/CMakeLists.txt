# Build example
add_executable(example
        window.cpp
        glew.c
        example.cpp
        )
target_link_libraries(example
        glfw
        ${GLFW_LIBRARIES}
        nanovg
        ${OPENGL_LIBRARIES}
        )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
        glew.c
        tests.cpp
        )
target_link_libraries(tests
        glfw
        ${GLFW_LIBRARIES}
        nanovg
        ${OPENGL_LIBRARIES}
        )

# Build aufgabe_2_und_3
add_executable(aufgabe_2_und_3
        aufgabe_2_und_3.cpp
)


