#pragma once
#include <windows.h>

#ifndef STRICT
#define STRICT
#endif

#define _ATL_APARTMENT_THREADED

// HACK: atlgdi.h is broken.
#define __ATLGDI_H__

#include <atlbase.h>
#include <atlctl.h>
#include <atlwin.h>
#include <atlapp.h>
