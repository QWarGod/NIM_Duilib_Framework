// VirtualBox.cpp : ����Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "main.h"
#include "main_form.h"
#include "VirtualTileBox.h"

ui::Control* MyCreateControlCallback(const std::wstring& sName)
{
	if (sName == L"VirtualTileBox")
	{
		return new VirtualTileBox();
	}
	return nullptr;
}

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// �������߳�
	MainThread thread;

	// ִ�����߳�ѭ��
	thread.RunOnCurrentThreadWithLoop(nbase::MessageLoop::kUIMessageLoop);

	return 0;
}

void MainThread::Init()
{
	nbase::ThreadManager::RegisterThread(kThreadUI);

	// ��ȡ��Դ·������ʼ��ȫ�ֲ���
	std::wstring theme_dir = QPath::GetAppPath();
#ifdef _DEBUG
	// Debug ģʽ��ʹ�ñ����ļ�����Ϊ��Դ
	// Ĭ��Ƥ��ʹ�� resources\\themes\\default
	// Ĭ������ʹ�� resources\\lang\\zh_CN
	// �����޸���ָ�� Startup �����������
	ui::GlobalManager::Startup(theme_dir + L"resources\\", MyCreateControlCallback, false);
#else
	// Release ģʽ��ʹ����Դ�е�ѹ������Ϊ��Դ
	// ��Դ�����뵽��Դ�б����Ϊ THEME����Դ����Ϊ IDR_THEME
	// �����Դʹ�õ��Ǳ��ص� zip �ļ�������Դ�е� zip ѹ����
	// ����ʹ�� OpenResZip ��һ�����غ����򿪱��ص���Դѹ����
	ui::GlobalManager::OpenResZip(MAKEINTRESOURCE(IDR_THEME), L"THEME", "");
	// ui::GlobalManager::OpenResZip(L"resources.zip", "");
	ui::GlobalManager::Startup(L"resources\\", ui::CreateControlCallback(), false);
#endif

	// ����һ��Ĭ�ϴ�����Ӱ�ľ��д���
	MainForm* window = new MainForm();
	window->Create(NULL, MainForm::kClassName.c_str(), WS_OVERLAPPEDWINDOW & ~WS_MAXIMIZEBOX, 0);
	window->CenterWindow();
	window->ShowWindow();
}

void MainThread::Cleanup()
{
	ui::GlobalManager::Shutdown();
	SetThreadWasQuitProperly(true);
	nbase::ThreadManager::UnregisterThread();
}
