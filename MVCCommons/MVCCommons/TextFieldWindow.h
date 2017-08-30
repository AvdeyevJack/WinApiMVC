#pragma once
#include "iWindow.h"
#include "iView.h"
#include <map>

namespace WinApiMVC
{
	class iDataModel;
	class iTextGuiModel;
	
	class TextFieldWindow :
		public iView, iWindow
	{
	public:
		TextFieldWindow(iDataModel* DataModel, iWindow* ParentWnd, iTextGuiModel* GuiModel);
		virtual ~TextFieldWindow();
		
		virtual void Bind()									override;
		virtual void HandleEvent(iObserveable* EventSrc)	override;
		
		virtual void SetText(const std::wstring& Text)		override;
		virtual void Move(	int X,
							int Y)							override;
		virtual void Resize(WindowResizeType ResizeType,
							int Width,
							int Height)						override;
		virtual void Show()									override;
		virtual void Hide()									override;
		virtual void Paint()								override;
		virtual void Scroll(int dX,
							int dY)							override;
		virtual HWND GetHwnd()								override;
	
	private:
		iWindow*		ParentWnd;
		iDataModel*		DataModel;
		iTextGuiModel*	GuiModel
		HWND			hWnd;
		
		static std::map<HWND, TextFieldWindow*> WindowHandlers;
		static LRESULT CALLBACK WndProcedure (HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam);
	};
}



