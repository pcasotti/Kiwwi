#pragma once

#ifdef KW_PLATFORM_WINDOWS
	#ifdef KW_BUILD_DLL
		#define KIWWI_API __declspec(dllexport)
	#else
		#define KIWWI_API __declspec(dllimport)
	#endif
#else
	#error Kiwwi only supports Windows!
#endif