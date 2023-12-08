#include "Client.h"
#include "CLDataBase.h"

void Client::afficher(System::Windows::Forms::DataGridView^ data)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "SELECT * FROM client WHERE";
    bool where = false;

    if (nom != "")
    {
        query += " nom = '" + nom + "'";
        where = true;
    }

    if (prenom != "")
    {
        query += (where ? " AND" : "") + " prenom = '" + prenom + "'";
        where = true;
    }

    if (naissance != "")
    {
        query += (where ? " AND" : "") + " Date_naissance = '" + naissance + "'";
        where = true;
    }

    if (id != "")
    {
        query += (where ? " AND" : "") + " Num_client = " + id ;
        where = true;
    }

    query += ";";

    System::Data::DataSet^ dataSet = database->getDataSet(query);

    data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}


void Client::ajouter()
{
   CLDataBase^ database = gcnew CLDataBase();
	System::String^ query = "INSERT INTO Client (nom, prenom, Date_naissance) VALUES ('" + nom + "', '" + prenom + "', '" + naissance + "')";
	database->ExecuteQuery(query);
}
    

void Client::modifier()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "UPDATE Client SET ";

    if (nom != "")
    {
        query += "nom = '" + nom + "' ";
    }

    if (prenom != "")
    {
        query += "prenom = '" + prenom + "' ";
    }

    if (naissance != "")
    {
		query += "Date_naissance = '" + naissance + "' ";
	}

    // Assurez-vous que vous avez des conditions à mettre à jour
        query += " WHERE Num_Client = '" + id + "';";
        database->ExecuteQuery(query);
    
}


void Client::supprimer()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "DELETE FROM Client WHERE id = '" + id + "';";
    database->ExecuteQuery(query);
}

void Client::rafraichir(System::Windows::Forms::DataGridView^ data)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Client;");

    data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}

void Client::setNom(System::String^ nom)
{
	this->nom = nom;
}

void Client::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void Client::setNaissance(System::String^ naissance)
{
	this->naissance = naissance;
}

void Client::setId(System::String^ id)
{
	this->id = id;
}
