# LoadEXE
A Proof that SetWindowHook API can inject exe itself into another process

## Principle
SetWindowsHook calls _SetWindowsHookEx which has less check on arguments

## Advantages & Disadvantages
* Can inject a pe file without LoadLibrary it.
* Can inject pe itself into another process.
* Do not notify the Ring3 LdrpSendDllNotifications.
* Do not need process handle.
* No new thread or shellcode.
- Need target HWND.
- Notifies LoadImage and minifilter in kernel.
- Do not support TLS callback.(Not implemented)

