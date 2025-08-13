#include <stdio.h>
#include <GLFW/glfw3.h>
#if defined(__linux__)
  #include <GL/gl.h>
#endif

int width, height;
short vMAJOR, vMINOR;

int main(void) {

    // size Window
    width = 640;
    height = 480;

    // Version
    vMAJOR = 3;
    vMINOR = 4;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, vMAJOR);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, vMINOR);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window;

        /* Initialize the library */
        if (!glfwInit()){
            printf("Failed to initialize GLFW (>‿◠)✌\n");
            return -1;
        }

        /* Create a windowed mode window and its OpenGL context */
        window = glfwCreateWindow(width, height, "Hello World", NULL, NULL);
        if (!window)
        {
            printf("Lol by to failed to create window\n");
            glfwTerminate();
            return -1;
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);

        /* Loop until the user closes the window */
        while (!glfwWindowShouldClose(window))
        {
            /* Render here */
            glClearColor(0.05f, 0.10f, 0.25f, 1.0f); // color GL
            glClear(GL_COLOR_BUFFER_BIT);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();
        }

        glfwDestroyWindow(window);
        glfwTerminate();
        return 0;
}
