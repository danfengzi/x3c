// Copyright 2008-2011 Zhang Yun Gui, rhcad@hotmail.com
// http://sourceforge.net/projects/x3c/

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
#include <windows.h>        // Windows master include file
#include <shlwapi.h>        // Windows light-weight utility APIs

#include <SafeCall.h>       // SafeCall, InterfaceSafeCall...
#include <Log/DebugR.h>     // ASSERT, VERIFY and ASSERT_MESSAGE
#include <Log/LogHelper.h>  // LOG_WARNING ...
#define  LOGHEAD  L"@LogWriter:"    // eg: LOG_WARNING(LOGHEAD L"IDS_XXX);
