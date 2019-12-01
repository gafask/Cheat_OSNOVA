#include <Windows.h>
#include <process.h>
#include "main.h"

void __cdecl MainThread(void* pArg)
{
	bool STOP = false;
	while (true)
	{

		Sleep(10);
		if (GetAsyncKeyState(VK_NUMPAD9)) {
			STOP = true;
		}
		if (GetAsyncKeyState(VK_NUMPAD7)) {
			STOP = false;
		}

		if (STOP == true){
			AddMessageJumpQ("1", 250, NULL, false);
			*CMashina = *CCar1;
			AddMessageJumpQ("1DA", 250, NULL, false);
			Sleep(500);
			AddMessageJumpQ("2", 500, NULL, false);
			*CCamera1 = *CCar1;
			AddMessageJumpQ("2DA", 250, NULL, false);
			Sleep(500);
			AddMessageJumpQ("3", 250, NULL, false);
			*reinterpret_cast<byte*>(*reinterpret_cast<DWORD*>(*CMashina) + 0x428) = 16;
			AddMessageJumpQ("3DA", 250, NULL, false);
			Sleep(500);
			AddMessageJumpQ("4", 250, NULL, false);
			*Cvadila = *CPED;
			AddMessageJumpQ("4DA", 250, NULL, false);
			Sleep(500);
			AddMessageJumpQ("5", 250, NULL, false);
			*Cpasagir = *CPED;
			AddMessageJumpQ("5DA", 250, NULL, false);
			STOP = false;


		}
	}
}

BOOL WINAPI DllMain(_In_ HINSTANCE hinstDLL, _In_ DWORD fdwReason, _In_ PVOID lpvReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH) _beginthread(MainThread, NULL, nullptr);
	return TRUE;
}