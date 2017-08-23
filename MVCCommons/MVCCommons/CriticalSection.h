#pragma once
#include "iCriticalSection.h"

class CRITICAL_SECTION;

namespace WinApiMVC
{
	class CriticalSection :
		public iCriticalSection
	{
	public:
		CriticalSection();
		~CriticalSection();
		
		virtual void EnterCS() override;
		virtual void LeaveCS() override;
		
		class InvalidCriticalSection :
			public exception
		{};
	
	private:
		CRITICAL_SECTION* Cs;
	};	
}


