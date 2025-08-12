#include <stdio.h>
#include <GLFW/glfw3.h>
#if defined(__linux__)
  #include <GL/gl.h>
#endif

int width, height;
short vMAJOR, vMINOR;

int main(void) {

    // size Window
    width = 800;
    height = 400;

    // Version
    vMAJOR = 3;
    vMINOR = 4;

    if (!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW (>‿◠)✌\n");
        return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, vMAJOR);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, vMINOR);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window;

    window = glfwCreateWindow(width, height, "Hello Window", NULL, NULL); // create window bro.!!!
    if (!window) {
        fprintf(stderr, "Lol by to failed to create window\n");
        glfwTerminate();
        return 1;
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // vsync

    while (!glfwWindowShouldClose(window)) {

        glClearColor(0.05f, 0.10f, 0.25f, 1.0f); // color GL
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
