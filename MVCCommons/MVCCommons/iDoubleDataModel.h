#pragma once
#include "iDataModel.h"


namespace WinApiMVC
{
	class iDoubleDataModel :
		public iDataModel
	{
	public:
		virtual ~iDoubleDataModel() = 0;
		
		virtual double GetDouble() = 0;
	}
}

