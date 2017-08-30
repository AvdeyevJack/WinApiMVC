#pragma once
#include "iIntDataModel.h"


namespace WinApiMVC
{
	class iBoundedDataModel :
		public iIntDataModel
	{
	public:
		virtual ~iBoundedDataModel() = 0;
		
		virtual int GetMinBound() = 0;
		virtual int GetMaxBound() = 0;
	};
}

