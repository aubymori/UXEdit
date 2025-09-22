#include "pch.h"
#include "MainWindow.h"

CAppModule _Module;

int WINAPI wWinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPWSTR    lpCmdLine,
	int       nCmdShow
)
{
	CMessageLoop msgLoop;
	_Module.AddMessageLoop(&msgLoop);

	CMainWindow mainWnd;
	RECT rc = { 0, 0, 900, 600 };
	if (mainWnd.CreateEx(NULL, rc) == NULL)
	{
		ATLTRACE(_T("Main window creation failed!\n"));
		return 0;
	}

	mainWnd.ShowWindow(nCmdShow);

	int nRet = msgLoop.Run();
	_Module.RemoveMessageLoop();

	return nRet;
}