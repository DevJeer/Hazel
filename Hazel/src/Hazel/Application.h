#pragma once
#include "Core.h"

namespace Hazel {
	// 这个类是dll 需要导出
	class HAZEL_API Application
	{
	public:
		Application();
		// 需要释放资源
		virtual ~Application();

		// 程序运行的方法
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

