#pragma once
#include <glfw3.h>

class Window {
private:
	static GLFWwindow* wnd;
public:
	~Window();
	int CreateWindow();
	void Run();
};