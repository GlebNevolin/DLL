// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "For_static_link.h"
#include <iostream>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
//comment for MAIN branch
extern "C" void __stdcall NameSurname(char* p)
{
    char a[] = "Nevolin Gleb Olegovich";
    strcpy(p, a);
}

extern "C" int __stdcall GroupNumber()
{
    int i = 591220;
    return i;
}
//last comment for MAIN branch