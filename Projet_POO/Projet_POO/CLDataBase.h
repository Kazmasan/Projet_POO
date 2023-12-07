#pragma once

ref class CLDataBase
{
private:
	System::Data::SqlClient::SqlConnection^ connection;
public:
	CLDataBase();
	~CLDataBase();
	//getDataSet
	System::Data::DataSet^ getDataSet(System::String^ sqlString);
	//ExecuteQuery
	void ExecuteQuery(System::String^ sqlString);
};