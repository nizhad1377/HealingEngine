#pragma once
#ifdef HE_PLATFORM_WINDOWS
#include<Windows.h>
extern Healing::Application* Healing::CreateApplication();

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR IpCmdline,
	int nCmdShow
)
{
	auto app = Healing::CreateApplication();
	app->Run();
	delete app;
}
#else 
int main(int argc, char* argv[]) 
{
	auto app = Healing::CreateApplication();
	app->Run();
	delete app;
}
#endif // HE_PLATFORM_WINDOS
