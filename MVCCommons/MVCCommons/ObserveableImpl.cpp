#include "ObserveableImpl.h"
#include "CriticalSection.h"
#include "iView.h"

using namespace WinApiMVC;

ObserveableImpl::ObserveableImpl()
{
	try
	{
		Cs = new CriticalSection;
	}
	catch(const exception& e)
	{
		Cs = nullptr;
	}
}

ObserveableImpl::~ObserveableImpl()
{
	if(Cs)
		Cs->EnterCS();
	Listeners.clear();
	if(Cs)
	{
		Cs->LeaveCS();
		delete Cs;
	}
}

void ObserveableImpl::RegisterListener(iView* Listener)
{
	if (nullptr == Listener)
		throw NullPointerException();
	if(Cs)
		Cs->EnterCS();
	Listeners.insert(Listener);
	if(Cs)
		Cs->LeaveCS();
}

void ObserveableImpl::UnregisterListener(iView* Listener)
{
	if (nullptr == Listener)
		throw NullPointerException();
	if(Cs)
		Cs->EnterCS();
	Listeners.erase(Listener);
	if(Cs)
		Cs->LeaveCS();
}

void ObserveableImpl::Notify()
{
	if(Cs)
		Cs->EnterCS();
	for (iView* V : Listeners)
		V->HandleEvent(this);
	if(Cs)
		Cs->LeaveCS();
}




