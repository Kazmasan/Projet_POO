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
    bool firstField = true;

    if (!System::String::IsNullOrEmpty(this->nom))
    {
        query += "Nom = '" + this->nom + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->prenom))
    {
        if (!firstField) query += ", ";
        query += "Prenom = '" + this->prenom + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->naissance))
    {
        if (!firstField) query += ", ";
        query += "Date_naissance = '" + this->naissance + "'";
        firstField = false;
    }

    // Ajouter la condition WHERE pour l'ID
    query += " WHERE Num_client = " + this->id;

    // Exécuter la requête uniquement si au moins un champ est modifié
        database->ExecuteQuery(query);
        System::Windows::Forms::MessageBox::Show("Client modifié avec succès.", "Succès", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
    
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
