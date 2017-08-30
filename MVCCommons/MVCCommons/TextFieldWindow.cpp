#include "TextFieldWindow.h"
#include "iDataModel.h"
#include <Windows.h>

using namespace WinApiMVC;

TextFieldWindow::TextFieldWindow(iDataModel* DataModel, iWindow* ParentWnd)
{
	this->DataModel = DataModel;
	this->ParentWnd = ParentWnd;
	try
	{
		
	}
	catch (const std::exception& e)
	{}
}

TextFieldWindow::~TextFieldWindow()
{
	DataModel->UnregisterListener(static_cast<iView*>(this));
}

TextFieldWindow::void Bind()
{
	try
	{
		DataModel->RegisterListener(static_cast<iView*>(this));
	}
	catch (const std::exception& e)
	{}
}

TextFieldWindow::void HandleEvent(iObserveable* EventSrc)
{
	if (static_cast<iObserveable*>(DataModel) != EventSrc)
		return;
	
	SetText(DataModel->ToString());
}

TextFieldWindow::void SetText(const std::wstring& Text)
{}

TextFieldWindow::Move(int X, int Y)
{}

TextFieldWindow::

TextFieldWindow::








