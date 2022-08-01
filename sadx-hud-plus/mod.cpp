#include "pch.h"
#include "SADXModLoader.h"

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}
