#pragma once

#ifdef HE_PLATFORM_WINDOWS
	#ifdef HE_BUILD_DLL
		#define HEALING_API __declspec(dllexport)
	#else
		#define HEALING_API __declspec(dllimport)
	#endif // HE_BUILD_DLL
#endif // HE_PLATFORM_WINDOWS
