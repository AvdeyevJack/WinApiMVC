#include "ObserveableImpl.h"
#include "iCriticalSection.h"
#include "iView.h"

using namespace WinApiMVC;

ObserveableImpl::ObserveableImpl(iCriticalSection* Cs)
{
	this->Cs = Cs;
}

ObserveableImpl::~ObserveableImpl()
{
	if(Cs)
		Cs->EnterCS();
	Listeners.clear();
	if(Cs)
	{
		Cs->LeaveCS();
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




