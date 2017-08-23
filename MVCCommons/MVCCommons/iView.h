#pragma once

namespace WinApiMVC
{
	class iObserveable;
	
	class iView
	{
	public:
		virtual ~iView() = 0;

		virtual void HandleEvent(iObserveable* EventSrc) = 0;
	};
}

