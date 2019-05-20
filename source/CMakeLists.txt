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

# Build aufgabe_2_und_3
add_executable(aufgabe_2_und_3
        aufgabe_2_und_3.cpp
        )

# Build circle
add_executable(aufgabe_4_1
        aufgabe_4_1.cpp
        circle.cpp
        circle.hpp
        vec2.cpp
        vec2.hpp
        mat2.cpp
        mat2.hpp
        )

# Build aufgabe_6
add_executable(aufgabe_6
        aufgabe_6.cpp
        vec2.hpp
        vec2.cpp
        circle.hpp
        circle.cpp
        mat2.hpp
        mat2.cpp
        )

# Build aufgabe_7
add_executable(aufgabe_7
        aufgabe_7.cpp
        circle.cpp
        circle.hpp
        vec2.cpp
        vec2.hpp
        mat2.cpp
        mat2.hpp
        )

# Build aufgabe_9
add_executable(aufgabe_9
        aufgabe_9.cpp
        )

# Build aufgabe_11
add_executable(aufgabe_11
        aufgabe_11.cpp
        )

# Build aufgabe_12
add_executable(aufgabe_12
        aufgabe_12.cpp
        )

# Build aufgabe_13
add_executable(aufgabe_13
        aufgabe_13.cpp
        )

add_executable(test
        tests.cpp
        circle.cpp
        circle.hpp
        vec2.cpp
        vec2.hpp
        mat2.cpp
        mat2.hpp
        )