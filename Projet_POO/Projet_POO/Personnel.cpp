#include "Personnel.h"
#include "CLDataBase.h"

void Personnel::afficher(System::Windows::Forms::DataGridView^ data)
{
}

void Personnel::rafraichir(System::Windows::Forms::DataGridView^ dataGrid)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Personnel");

    dataGrid->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}

void Personnel::ajouter()
{
    throw gcnew System::NotImplementedException();
}

void Personnel::modifier()
{
    throw gcnew System::NotImplementedException();
}

void Personnel::supprimer()
{
    throw gcnew System::NotImplementedException();
}
