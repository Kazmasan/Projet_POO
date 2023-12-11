#include "Adresse.h"
#include "CLDataBase.h"


void Adresse::rafraichir(System::Windows::Forms::DataGridView^ data){
	CLDataBase^ database = gcnew CLDataBase();
	System::String^ query = "SELECT * FROM Adresse_client WHERE Num_client = " + this ->idClient ;
	System::Data::DataSet^ dataSet = database->getDataSet(query);
	data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}

void Adresse::ajouter() {

	System::String^ query = "INSERT INTO Adresse_client (Adresse, Ville, Code_Postal, Pays, Type, Num_client) VALUES ('" + this->rue + "', '" + this->ville + "', '" + this->codePostal + "', '" + this->pays + "', '" + this->type + "', " + this->idClient + ")";
    CLDataBase^ database = gcnew CLDataBase();
	database->ExecuteQuery(query);
}

void Adresse::modifier() {

    System::String^ query = "UPDATE Adresse_client SET ";
    bool firstField = true;

    if (!System::String::IsNullOrEmpty(this->rue))
    {
        query += "Adresse = '" + this->rue + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->ville))
    {
        if (!firstField) query += ", ";
        query += "Ville = '" + this->ville + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->codePostal))
    {
        if (!firstField) query += ", ";
        query += "Code_Postal = '" + this->codePostal + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->pays))
    {
        if (!firstField) query += ", ";
        query += "Pays = '" + this->pays + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->type))
    {
        if (!firstField) query += ", ";
        query += "Type = '" + this->type + "'";
        firstField = false;
    }

    // Ajouter la condition WHERE pour l'ID
    query += " WHERE Id_adresse = " + this->id_adresse;
    CLDataBase^ database = gcnew CLDataBase();
    database->ExecuteQuery(query);

}


void Adresse::supprimer() {

	System::String^ query = "DELETE FROM Adresse_client WHERE ID_Adresse = " + this->id_adresse;
    CLDataBase^ database = gcnew CLDataBase();
	database->ExecuteQuery(query);
}


void Adresse::afficher(System::Windows::Forms::DataGridView^ data) {

	rafraichir(data);
}


void Adresse::setRue(String^ adresse)
{
	this->rue = adresse;
}

void Adresse::setVille(String^ adresse)
{
	this->ville = adresse;
}


void Adresse::setCodePostal(String^ adresse)
{
	this->codePostal = adresse;
}


void Adresse::setPays(String^ adresse)
{
	this->pays = adresse;
}

void Adresse::setIdAdresse(int^ adresse)
{
	this-> id_adresse = adresse;
}

void Adresse::setIdClient(int id)
{
	this->idClient = id;
}

void Adresse::setType(String^ type)
{
	this->type = type;
}
