#include <iostream>
#define NOMINMAX
#include "windows.h"
#include "InjectInit.h"

int main()
{
    DWORD hWnd;
    std::cout << "Input hwnd (dec): ";
    std::cin >> hWnd;
    SelfInject((HWND)hWnd);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        MessageBoxA(0, "123", "456", 0);
        return 0; // return 1 to keep exe in injected process.
    }
    
    return 1;
}
