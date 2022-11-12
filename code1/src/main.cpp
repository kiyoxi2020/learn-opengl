#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <stdio.h>

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);


int main()
{
	//glfw初始化
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//glfw创建窗口
	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
	if (window == NULL)
	{
		printf("创建窗口失败");
		//终止
		glfwTerminate();
		return -1;
	}
	//设置当前OpenGL上下文
	glfwMakeContextCurrent(window);

	//设置回调，当窗口大小调整后将调用该回调函数
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
	//设置回调，当发生按键操作时将调用该回调函数
	glfwSetKeyCallback(window, key_callback);

	// glad初始化
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		printf("加载失败");
		return -1;
	}

	// 使用循环达到循环渲染效果
	while (!glfwWindowShouldClose(window))
	{
		//检查事件
		glfwPollEvents();

		//渲染指令
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//交换缓冲
		glfwSwapBuffers(window);
	}

	//终止渲染 关闭并清理glfw本地资源
	glfwTerminate();
	return 0;
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
}
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}