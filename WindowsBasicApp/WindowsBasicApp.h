#pragma once

#include "resource.h"
#include <cstdio> 
#include <afxwin.h>
HWND hModelessDlg = NULL;
#include <cstring>
#include <commdlg.h>   // for common dialogs
#include <fstream>
#include <string>
#include <windows.h>
HBRUSH hEditBg;   // global brush
HWND hEdit;
WNDPROC OldEditProc;
TCHAR fontName[LF_FACESIZE];
TCHAR fontSizeStr[16];
TCHAR fontWeightStr[20];