#pragma once

namespace WinApiMVC
{
	class iController
	{
	public:
		virtual ~iController() = 0;
		virtual void Execute() = 0;

		virtual void OnLeftClick(	int X,
									int Y) = 0;
		virtual void OnRightClick(	int X,
									int Y) = 0;
		virtual void OnDblClick(	int X,
									int Y) = 0;

		struct MouseButtonsState
		{
			bool LeftButton;
			bool RightButton;
			bool MiddleButton;
			bool Shift;
			bool Ctrl;
			bool XButton1;
			bool XButton2;
		};
		virtual void OnMouseMove(	MouseButtonsState ButtonsState,
									int X,
									int Y) = 0;
		virtual void OnKeyDown(unsigned int Pressed) = 0;
		virtual void OnKeyUp(unsigned int Pressed) = 0;
		virtual void OnChar(wchar_t Pressed) = 0;
	};
}

