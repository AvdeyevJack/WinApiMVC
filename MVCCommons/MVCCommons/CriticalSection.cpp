#include "CriticalSection.h"
#include <Windows.h>

using namespace WinApiMVC;

CriticalSection::CriticalSection()
{
	try
	{
		Cs = new CRITICAL_SECTION;
		InitializeCriticalSection(Cs);
	}
	catch(const exception& e)
	{
		Cs = nullptr;
		throw;
	}
}

CriticalSection::~CriticalSection()
{
	if(Cs)
		DeleteCriticalSection(Cs);
	delete Cs;
}

void CriticalSection::EnterCS()
{
	if(Cs)
		EnterCriticalSection(Cs);
}

void CriticalSection::LeaveCS()
{
	if(Cs)
		LeaveCriticalSection(Cs);
}


