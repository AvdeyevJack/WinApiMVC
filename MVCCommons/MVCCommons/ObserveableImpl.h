#pragma once
#include "iObserveable.h"
#include <set>

namespace WinApiMVC
{
	class CriticalSection;
	
	class ObserveableImpl :
		public iObserveable
	{
	public:
		ObserveableImpl();
		virtual ~ObserveableImpl();
	
		virtual void RegisterListener(iView* Listener) override;
		virtual void UnregisterListener(iView* Listener) override;
		virtual void Notify() override;
		
	private:
		std::set<iView*> Listeners;
		CriticalSection* Cs;
	};
}


