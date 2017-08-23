#pragma once

class std::wstring;

namespace WinApiMVC
{
	class iWindow
	{
	public:
		virtual ~iWindow() = 0;

		enum WindowResizeType { SizeRestored, SizeMinimized, SizeMaximized, SizeMaxShow, SizeMaxHide };
		virtual void SetText(const std::wstring& Text) = 0;
		virtual void Move(	int X,
							int Y) = 0;
		virtual void Resize(WindowResizeType ResizeType,
							int Width,
							int Height) = 0;
		virtual void Show() = 0;
		virtual void Hide() = 0;
		virtual void Paint() = 0;
		virtual void Scroll(int dX,
							int dY) = 0;
	};
}

