#include <iostream>
#include <OpenGL/gl.h>
#include <GLFW/glfw3.h>

int main() {
    if (!glfwInit()) {
        std::cerr << "GLFW failed" << std::endl;
        return -1;
    }
    std::cout << "this is like as cool as that one time i did that one thing where the one thing happened" << std::endl;
    GLFWwindow* window = glfwCreateWindow(640, 480, "super cool window", NULL, NULL);
    if (!window) {
        std::cerr << "failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
    return 0;
}
