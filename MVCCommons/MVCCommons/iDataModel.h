#pragma once
#include "iObserveable.h"
#include <string>

namespace WinApiMVC
{
	class iDataModel :
		public iObserveable
	{
	public:
		virtual ~iDataModel() = 0;
		
		virtual std::wstring ToString() = 0;
	};
}

