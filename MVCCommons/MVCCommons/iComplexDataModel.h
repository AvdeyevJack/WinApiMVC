#pragma once
#include "iDataModel.h"


namespace WinApiMVC
{
	class iComplexDataModel :
		public iDataModel
	{
	public:
		virtual ~iComplexDataModel() = 0;
		
		virtual *iDataModel GetDataModel(int Index) = 0;
		virtual int GetModelsCount() = 0;
	};
}

