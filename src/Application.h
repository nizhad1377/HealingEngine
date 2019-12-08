#pragma once
#include"Core.h"
namespace Healing 
{
	class HEALING_API Application
	{
	public:
		Application();
		~Application();
		void Run();

	};
	Application* CreateApplication();
}

