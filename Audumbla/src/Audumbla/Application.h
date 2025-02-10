#pragma once

#include "Core.h"

namespace Audumbla {

	class ADMBL_API Application // функция экспортируется из DLL.
	{
	public:
		Application();
		virtual ~Application();

		void Run(); // Запуск приложения
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
