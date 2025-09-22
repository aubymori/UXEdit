#pragma once
#include "pch.h"
#include "atlframe.h"

class CMainWindow : public CWindowImpl<CMainWindow>
{
public:
	DECLARE_WND_CLASS(L"UXEdit_MainWindow")

	BEGIN_MSG_MAP(CMainWindow)
		MESSAGE_HANDLER(WM_CREATE, OnCreate)
	END_MSG_MAP()

	LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &fHandled);
};