#pragma once
#include "iDataModel.h"


namespace WinApiMVC
{
	class iIntDataModel :
		public iDataModel
	{
	public:
		virtual ~iIntDataModel() = 0;
		
		virtual int GetInt() = 0;
	}
}

