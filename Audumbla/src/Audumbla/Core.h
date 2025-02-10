#pragma once

#ifdef ADMBL_PLATFORM_WINDOWS
	#ifdef ADMBL_BUILD_DLL
		#define ADMBL_API __declspec(dllexport)
	#else
		#define ADMBL_API __declspec(dllimport)
	#endif
#else
	#error Audumbla only support Windows!
#endif // ADMBL_PLATFORM_WINDOWS
