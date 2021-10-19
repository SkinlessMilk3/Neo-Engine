#include "Window.h"

Window::~Window() {
	//delete wnd;
}

int Window::CreateWindow() {
	if (wnd == nullptr)
		/* Create a windowed mode window and its OpenGL context */
		wnd = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!wnd) {
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	//glfwMakeContextCurrent(wnd);

	//Run();

	//glfwTerminate();
	return 0;
}

void Window::Run() {
	/* Loop until the user closes the window */
	/*while (!glfwWindowShouldClose(wnd))
	{
		/* Render here */
		//glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		//glfwSwapBuffers(wnd);

		/* Poll for and process events */
		//glfwPollEvents();
	//}
}