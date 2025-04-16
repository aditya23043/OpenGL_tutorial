#include "../include/glad/glad.h"
#include "../include/GLFW/glfw3.h"
#include <stdio.h>
#include <stdbool.h>

#define WIDTH 800
#define HEIGHT 600

void framebuffer_size_callback(GLFWwindow *window, int width, int height);

int main(void) {

  float vertices[] = {
    -0.5f, -0.5f, 0.0f,
     0.5f, -0.5f, 0.0f,
     0.0f,  0.5f, 0.0f
  };

  /* Triangle

              (0,0.5)

               (0,0)

      (-0.5,-0.5)   (0.5,-0.5)

  */

  unsigned int VBO;

  /* GLFW INIT */
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);

  /* WINDOW */
  GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "OpenGL", NULL, NULL);

  if (window == NULL) {
    printf("Failed to create GLFW window");
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  /* GLAD INIT */
  if (gladLoadGLLoader((GLADloadproc)glfwGetProcAddress) == 0) {
    printf("Failed to initialize GLAD");
    return -1;
  }

  /* VIEWPORT */
  glViewport(0, 0, WIDTH, HEIGHT);
  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

  /* MAIN LOOP */
  while (!glfwWindowShouldClose(window)) {

    /* INPUT */
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS) {
      glfwSetWindowShouldClose(window, true);
    }

    /* RENDER */
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    /* Check events and swap buffs */
    glfwPollEvents();
    glfwSwapBuffers(window);

  }

  glfwTerminate();

  return 0;
}

void framebuffer_size_callback(GLFWwindow *window, int width, int height) {
  glViewport(0, 0, width, height);
}
