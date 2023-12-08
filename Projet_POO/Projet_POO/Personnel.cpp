#include "Personnel.h"
#include "CLDataBase.h"

bool IdExiste(System::String^ id)
{
    // V�rifier si l'ID existe dans la base de donn�es
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "SELECT * FROM Personnel WHERE IdPersonnel = " + id;

    // Ex�cuter la requ�te et r�cup�rer les r�sultats
    System::Data::DataSet^ dataSet = database->getDataSet(query);

    // V�rifier si le DataSet contient des lignes
    return (dataSet->Tables[0]->Rows->Count > 0);
}

void Personnel::afficher(System::Windows::Forms::DataGridView^ dataGrid)
{
    CLDataBase^ database = gcnew CLDataBase();
    // V�rifier si l'ID est valide
    if (!IdExiste(this->ID))
    {
        System::Windows::Forms::MessageBox::Show("L'ID du personnel n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }
    else
    {
        System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Personnel WHERE IdPersonnel = " + this->ID);
        dataGrid->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
    }
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
    if (System::String::IsNullOrWhiteSpace(this->nom) || System::String::IsNullOrWhiteSpace(this->prenom) || System::String::IsNullOrWhiteSpace(this->dateEmbauche) || System::String::IsNullOrWhiteSpace(this->superieur))
    {
        System::Windows::Forms::MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }
    else
    {
        System::Data::DataSet^ dataSet = database->getDataSet("INSERT INTO Personnel (Nom, Prenom, DateEmbauche, Superieur) VALUES ('" + this->nom + "', '" + this->prenom + "', '" + this->dateEmbauche + "', '" + this->superieur + "')");
    }
}

void Personnel::modifier()
{

    // V�rifier si l'ID est valide
    if (!IdExiste(this->ID))
    {
        System::Windows::Forms::MessageBox::Show("L'ID du personnel n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }

    // V�rifier si au moins un champ est rempli
    if (System::String::IsNullOrEmpty(this->nom) && System::String::IsNullOrEmpty(this->prenom) && System::String::IsNullOrEmpty(this->dateEmbauche) && System::String::IsNullOrEmpty(this->superieur))
    {
        System::Windows::Forms::MessageBox::Show("Au moins un champ doit �tre rempli.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }

    CLDataBase^ database = gcnew CLDataBase();

    // Construire la requ�te SQL en fonction des champs non vides
    System::String^ query = "UPDATE Personnel SET ";
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

    if (!System::String::IsNullOrEmpty(this->dateEmbauche))
    {
        if (!firstField) query += ", ";
        query += "DateEmbauche = '" + this->dateEmbauche + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->superieur))
    {
        if (!firstField) query += ", ";
        query += "Superieur = '" + this->superieur + "'";
    }

    // Ajouter la condition WHERE pour l'ID
    query += " WHERE IdPersonnel = " + this->ID;

    // Ex�cuter la requ�te uniquement si au moins un champ est modifi�
    if (!firstField)
    {
        database->ExecuteQuery(query);
        System::Windows::Forms::MessageBox::Show("Personnel modifi� avec succ�s.", "Succ�s", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
    }
    else
    {
        System::Windows::Forms::MessageBox::Show("Aucun champ n'a �t� modifi�.", "Information", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
    }
}


void Personnel::supprimer()
{
    CLDataBase^ database = gcnew CLDataBase();
    // V�rifier si l'ID est valide
    if (!IdExiste(this->ID))
    {
        System::Windows::Forms::MessageBox::Show("L'ID du personnel n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }
    else
    {
        System::Data::DataSet^ dataSet = database->getDataSet("DELETE FROM Personnel WHERE IdPersonnel = " + this->ID);
    }
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
