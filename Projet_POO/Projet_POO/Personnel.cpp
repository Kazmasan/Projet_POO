#include "Personnel.h"
#include "CLDataBase.h"

void Personnel::afficher()
{
    throw gcnew System::NotImplementedException();
}

void Personnel::rafraichir(System::Windows::Forms::DataGridView^ dataGrid)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Personnel");

    dataGrid->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}

void Personnel::ajouter()
{
    //Ajouter un nouveau personnel
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("INSERT INTO Personnel (Nom, Prenom, DateEmbauche, Superieur) VALUES ('" + this->nom + "', '" + this->prenom + "', '" + this->dateEmbauche + "', '" + this->superieur + "')");
}

void Personnel::modifier()
{
    CLDataBase^ database = gcnew CLDataBase();
System::Data::DataSet^ dataSet = database->getDataSet("UPDATE Personnel SET Nom = '" + this->nom + "', Prenom = '" + this->prenom + "', DateEmbauche = '" + this->dateEmbauche + "', Superieur = '" + this->superieur + "' WHERE IdPersonnel = " + this->ID);
}

void Personnel::supprimer()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("DELETE FROM Personnel WHERE IdPersonnel = " + this->ID);
}

void Personnel::setNom(System::String^ nom)
{
    this->nom = nom;
}

void Personnel::setPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

void Personnel::setDateEmbauche(System::String^ dateEmbauche)
{
    this->dateEmbauche = dateEmbauche;
}

void Personnel::setSuperieur(System::String^ superieur)
{
    this->superieur = superieur;
}

void Personnel::setID(System::String^ ID)
{
    this->ID = ID;
}
