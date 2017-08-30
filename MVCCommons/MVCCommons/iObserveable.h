#pragma once

namespace WinApiMVC
{
	class iView;
	
	class iObserveable
	{
	public:
		virtual ~iObserveable() = 0;
	
		virtual void RegisterListener(iView* Listener) = 0;
		virtual void UnregisterListener(iView* Listener) = 0;
		virtual void Notify() = 0;
	};
}

