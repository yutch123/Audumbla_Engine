#pragma once

#include "Core.h"

namespace Audumbla {

	class ADMBL_API Application // ������� �������������� �� DLL.
	{
	public:
		Application();
		virtual ~Application();

		void Run(); // ������ ����������
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
