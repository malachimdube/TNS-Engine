#pragma once

#ifdef TNSE_PLATFORM_WINDOWS
	#ifdef TNSE_BUILD_DLL
		#define TNSE_API __declspec(dllexport)
	#else
		#define TNSE_API __declspec(dllimport)
	#endif
#else
	#error TNSE only supports Windows currently
#endif