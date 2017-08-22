#pragma once

class std::wstring;

namespace WinApiMVC
{
	class iView
	{
	public:
		virtual ~iView() = 0;

		virtual void SetText(const std::wstring& Text) = 0;
		virtual void HandleEvent() = 0;
	};
}

