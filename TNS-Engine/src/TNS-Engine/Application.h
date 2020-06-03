#pragma once

#include "Core.h"

namespace TNSE {
	class TNSE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in a client
	Application* CreateApplication();
}

