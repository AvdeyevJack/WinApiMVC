#pragma once

namespace WinApiMVC
{
	class iCriticalSection
	{
	public:
		virtual ~iCriticalSection() = 0;
		
		virtual void EnterCS() = 0;
		virtual void LeaveCS() = 0;
	};	
}


