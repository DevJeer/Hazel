#pragma once
#include "Core.h"

namespace Hazel {
	// �������dll ��Ҫ����
	class HAZEL_API Application
	{
	public:
		Application();
		// ��Ҫ�ͷ���Դ
		virtual ~Application();

		// �������еķ���
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

