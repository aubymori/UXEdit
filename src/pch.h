#ifndef _PCH_H
#define _PCH_H

#include <windows.h>
#include "resource.h"

#ifndef STRICT
#define STRICT
#endif

#define _ATL_APARTMENT_THREADED

#include <atlbase.h>
#include <atlctl.h>
#include <atlwin.h>
#include <atlapp.h>

extern CAppModule _Module;

#endif