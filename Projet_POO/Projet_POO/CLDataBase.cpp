#include "CLDataBase.h"

CLDataBase::CLDataBase()
{
    connection = gcnew System::Data::SqlClient::SqlConnection("Data Source =DESKTOP-CABGTS7;Initial Catalog =PIPO2;User ID =sa; Password=azerty");
}

CLDataBase::~CLDataBase()
{
    // Fermer la connexion dans le destructeur
    connection->Close();
}

System::Data::DataSet^ CLDataBase::getDataSet(System::String^ sqlString)
{
    // Créer un objet DataSet
    System::Data::DataSet^ dataSet = gcnew System::Data::DataSet();

    // Créer un objet DataAdapter
    System::Data::SqlClient::SqlDataAdapter^ dataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter(sqlString, connection);

    // Remplir le DataSet
    dataAdapter->Fill(dataSet);

    // Retourner le DataSet
    return dataSet;
}







































void CLDataBase::ExecuteQuery(System::String^ sqlString)
{
    // Créer un objet Command
    System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(sqlString, connection);

    // Ouvrir la connexion
    connection->Open();

    // Exécuter la requête
    command->ExecuteNonQuery();
}

