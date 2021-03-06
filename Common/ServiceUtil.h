#ifndef __SERVICE_UTIL_H__
#define __SERVICE_UTIL_H__

#include <Winsvc.h>

void InstallService(LPCWSTR lpcwszFilePath, LPCWSTR lpcwszName, LPCWSTR lpcwszViewName);
void RemoveService(LPCWSTR lpcwszName);
BOOL IsInstallService(LPCWSTR lpcwszName);
BOOL IsStopService(LPCWSTR lpcwszName);
BOOL StartServiceCtrl(LPCWSTR lpcwszName);
BOOL StopServiceCtrl(LPCWSTR lpcwszName);
DWORD GetServiceStatus(LPCWSTR lpcwszName);

#endif
