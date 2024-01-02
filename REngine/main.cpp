#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "GL/glew.h"
#include "GLFW/glfw3.h"

int main()
{
	if (!glfwInit ()) {
		std::cerr << "GLFW init failed..." << std::endl;
		return -1;
	}


	GLFWwindow* window = glfwCreateWindow (720, 480, "REngine", nullptr, nullptr);

	if (window == nullptr) {
		std::cerr << "Window init failed..." << std::endl;
		glfwTerminate ();
		return -2;
	}

	glfwMakeContextCurrent (window);
	//glfwSetKeyCallback (window, HandleKeyInput);

	if (glewInit () != GLEW_OK) {
		std::cerr << "Glew init failed..." << std::endl;
		glfwDestroyWindow (window);
		glfwTerminate ();
		return -3;
	}

	while (!glfwWindowShouldClose (window)) {

		glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glfwSwapBuffers (window);
	}


	/*optional*/
	glfwDestroyWindow (window);
	glfwTerminate ();
	/*--------*/

	return 0;
}
