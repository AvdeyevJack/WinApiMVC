#pragma once
#include "iObserveable.h"
#include <set>

namespace WinApiMVC
{
	class iCriticalSection;
	
	class ObserveableImpl :
		public iObserveable
	{
	public:
		ObserveableImpl(iCriticalSection* Cs);
		virtual ~ObserveableImpl();
	
		virtual void RegisterListener(iView* Listener) override;
		virtual void UnregisterListener(iView* Listener) override;
		virtual void Notify() override;
		
	private:
		std::set<iView*> Listeners;
		iCriticalSection* Cs;
	};
}


