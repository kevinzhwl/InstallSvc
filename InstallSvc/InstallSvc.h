
// InstallSvc.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CInstallSvcApp:
// �йش����ʵ�֣������ InstallSvc.cpp
//

class CInstallSvcApp : public CWinApp
{
public:
	CInstallSvcApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CInstallSvcApp theApp;