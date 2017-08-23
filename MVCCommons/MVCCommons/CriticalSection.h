#pragma once

class CRITICAL_SECTION;

namespace WinApiMVC
{
	class CriticalSection
	{
	public:
		CriticalSection();
		~CriticalSection();
		
		void EnterCS();
		void LeaveCS();
		
		class InvalidCriticalSection :
			public exception
		{};
	
	private:
		CRITICAL_SECTION* Cs;
	};	
}


