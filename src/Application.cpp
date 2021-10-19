#include "Application.h"
#include <glfw3.h>
#include <iostream>
//#include "Window/Window.h"

namespace Neo {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::run() {
		while (true)
			std::cout << "Hello World" << std::endl;
	}
}

int main(void)
{

	//Window wnd = Window();
	//wnd.CreateWindow();

	return 0;
}

