#pragma once
#include "../h/Service.h"
#include "../../Mappage/h/MappageStaff.h"
namespace NS_Service
{
	ref class ServiceStaff : Service
	{
	private:
		MappageStaff^ mMap;
	public:
		ServiceStaff();
		~ServiceStaff();
		System::Data::DataSet^ Display(int, array<String^>^);
		System::Data::DataSet^ DisplayAll(array<String^>^);
		System::Data::DataSet^ DisplayAddr(int, array<String^>^);
		array<int>^ Add(String^, String^, String^, String^, int, int, String^, String^, int, int);
		array<int>^ AddUser(String^, int);
		void Edit(int, String^, String^, String^, String^, int);
		void EditAd(int, int, String^, String^, int, int);
		void Delete(int);
	};

}
