#include "Personnel.h"
#include "CLDataBase.h"

void Personnel::afficher(System::Windows::Forms::DataGridView^ dataGrid)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Personnel");

    // Assurez-vous que le DataSet n'est pas vide
    if (dataSet->Tables->Count > 0)
    {
        // Liaison des données au DataGridView
        dataGrid->DataSource = dataSet->Tables[0];
    }
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
