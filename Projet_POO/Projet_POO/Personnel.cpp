#include "Personnel.h"
#include "CLDataBase.h"

bool IdExiste(System::String^ id)
{
    // Vérifier si l'ID existe dans la base de données
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "SELECT * FROM Personnel WHERE Id_personnel = " + id;

    // Exécuter la requête et récupérer les résultats
    System::Data::DataSet^ dataSet = database->getDataSet(query);

    // Vérifier si le DataSet contient des lignes
    return (dataSet->Tables[0]->Rows->Count > 0);
}

void Personnel::afficher(System::Windows::Forms::DataGridView^ dataGrid)
{
    CLDataBase^ database = gcnew CLDataBase();
    // Vérifier si l'ID est valide
    if (!IdExiste(this->ID))
    {
        System::Windows::Forms::MessageBox::Show("L'ID du personnel n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }
    else
    {
        System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Personnel WHERE Id_personnel = " + this->ID);
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
    if (System::String::IsNullOrWhiteSpace(this->nom) || System::String::IsNullOrWhiteSpace(this->prenom) || System::String::IsNullOrWhiteSpace(this->Date_embauche) || System::String::IsNullOrWhiteSpace(this->Id_superieur) || System::String::IsNullOrWhiteSpace(this->adresse))
    {
        System::Windows::Forms::MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }
    else
    {
        System::Data::DataSet^ dataSet = database->getDataSet("INSERT INTO Personnel (Nom, Prenom, Date_embauche, Id_superieur, Adresse) VALUES ('" + this->nom + "', '" + this->prenom + "', '" + this->Date_embauche + "', '" + this->Id_superieur + "', '" + this->adresse + "')");
    }
}

void Personnel::modifier()
{

    // Vérifier si l'ID est valide
    if (!IdExiste(this->ID))
    {
        System::Windows::Forms::MessageBox::Show("L'ID du personnel n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }

    // Vérifier si au moins un champ est rempli
    if (System::String::IsNullOrEmpty(this->nom) && System::String::IsNullOrEmpty(this->prenom) && System::String::IsNullOrEmpty(this->Date_embauche) && System::String::IsNullOrEmpty(this->Id_superieur) && System::String::IsNullOrEmpty(this->adresse))
    {
        System::Windows::Forms::MessageBox::Show("Au moins un champ doit être rempli.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }

    CLDataBase^ database = gcnew CLDataBase();

    // Construire la requête SQL en fonction des champs non vides
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

    if (!System::String::IsNullOrEmpty(this->Date_embauche))
    {
        if (!firstField) query += ", ";
        query += "Date_embauche = '" + this->Date_embauche + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->Id_superieur))
    {
        if (!firstField) query += ", ";
        query += "Id_superieur = '" + this->Id_superieur + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->adresse))
    {
        if (!firstField) query += ", ";
        query += "Adresse = '" + this->adresse + "'";
        firstField = false;
    }

    // Ajouter la condition WHERE pour l'ID
    query += " WHERE Id_personnel = " + this->ID;

    // Exécuter la requête uniquement si au moins un champ est modifié
    if (!firstField)
    {
        database->ExecuteQuery(query);
        System::Windows::Forms::MessageBox::Show("Personnel modifié avec succès.", "Succès", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
    }
    else
    {
        System::Windows::Forms::MessageBox::Show("Aucun champ n'a été modifié.", "Information", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
    }
}

void Personnel::supprimer()
{
    CLDataBase^ database = gcnew CLDataBase();
    // Vérifier si l'ID est valide
    if (!IdExiste(this->ID))
    {
        System::Windows::Forms::MessageBox::Show("L'ID du personnel n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }
    else
    {
        System::Data::DataSet^ dataSet = database->getDataSet("DELETE FROM Personnel WHERE Id_personnel = " + this->ID);
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

void Personnel::setDate_embauche(System::String^ Date_embauche)
{
    this->Date_embauche = Date_embauche;
}

void Personnel::setId_superieur(System::String^ Id_superieur)
{
    this->Id_superieur = Id_superieur;
}

void Personnel::setID(System::String^ ID)
{
    this->ID = ID;
}

void Personnel::setAdresse(System::String^ adresse)
{
    this->adresse = adresse;
}
