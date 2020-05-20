#pragma once

#include "Core.h"

namespace Kiwwi {

	class KIWWI_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}
