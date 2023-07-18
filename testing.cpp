#include <iostream>
#include <processthreadsapi.h>
#include <tchar.h>
#include <windows.h>

void DoStuff() {
    // Replace all this code by your payload
    STARTUPINFO si = { sizeof(STARTUPINFO) };
    PROCESS_INFORMATION pi;
    CreateProcess(NULL,  L"c:\\windows\\system32\\cmd.exe /C whoami /all > C:\\ProgramData\\whoamiall.txt",
        NULL, NULL, FALSE, 0, NULL, L"C:\\Windows", &si, &pi);

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
}

int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    DoStuff();
}
