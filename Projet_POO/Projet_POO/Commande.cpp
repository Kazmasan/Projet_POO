#include "Commande.h"
#include "CLDataBase.h"

bool Ref_Existe(System::String^ ref_commande)
{
	// Vérifier si l'ID existe dans la base de données
	CLDataBase^ database = gcnew CLDataBase();
	System::String^ query = "SELECT * FROM Commande WHERE Ref_commande = " + "'" + ref_commande + "'";

	// Exécuter la requête et récupérer les résultats
	System::Data::DataSet^ dataSet = database->getDataSet(query);

	// Vérifier si le DataSet contient des lignes
	return (dataSet->Tables[0]->Rows->Count > 0);
}


void Commande::rafraichir(System::Windows::Forms::DataGridView^ data)
{
	CLDataBase^ database = gcnew CLDataBase();
	System::String^ query = "SELECT Ref_commande, Date_livraison, Date_emission, Num_client FROM Commande";
	System::Data::DataSet^ dataSet = database->getDataSet(query);
	data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}

void Commande::afficher(System::Windows::Forms::DataGridView^ data)
{
	CLDataBase^ database = gcnew CLDataBase();
	// Vérifier si l'ID est valide
	if (!Ref_Existe(this->ref_commande))
	{
		System::Windows::Forms::MessageBox::Show("La Ref_commande de la commande n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return;  // Quitter la fonction en cas d'erreur
	}
	else
	{
		System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Commande WHERE Ref_commande = " + "'" + this->ref_commande + "'");
		data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
	}
}

void Commande::ajouter()
{
	System::String^ query = "INSERT INTO Commande (Ref_commande, Date_livraison, Date_emission, Num_client) VALUES ('""', '" + this->date_livraison + "', '" + this->date_emission + "', " + this->num_client + ")";
	CLDataBase^ database = gcnew CLDataBase();
	database->ExecuteQuery(query);
}

void Commande::modifier()
{
    if (!Ref_Existe(this->ref_commande))
    {
        System::Windows::Forms::MessageBox::Show("La Ref_commande de la commande n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }

    // Vérifier si au moins un champ est rempli
    if (System::String::IsNullOrEmpty(this->date_emission) && System::String::IsNullOrEmpty(this->date_livraison) && System::String::IsNullOrEmpty(System::Convert::ToString(this->num_client)))
    {
        System::Windows::Forms::MessageBox::Show("Au moins un champ doit être rempli.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        return;  // Quitter la fonction en cas d'erreur
    }

    CLDataBase^ database = gcnew CLDataBase();

    // Construire la requête SQL en fonction des champs non vides
    System::String^ query = "UPDATE Commande SET ";
    bool firstField = true;

    if (!System::String::IsNullOrEmpty(this->date_livraison))
    {
        if (!firstField) query += ", ";
        query += "Date_livraison = '" + this->date_livraison + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(this->date_emission))
    {
        if (!firstField) query += ", ";
        query += "Date_emission = '" + this->date_emission + "'";
        firstField = false;
    }

    if (!System::String::IsNullOrEmpty(System::Convert::ToString(this->num_client)))
    {
        if (!firstField) query += ", ";
        query += "Num_client = '" + this->num_client + "'";
        firstField = false;
    }

    // Ajouter la condition WHERE pour l'ID
    query += " WHERE Ref_commande = " + "'" + this->ref_commande + "'";

    System::Windows::Forms::MessageBox::Show(query);

    // Exécuter la requête uniquement si au moins un champ est modifié
    if (!firstField)
    {
        database->ExecuteQuery(query);
        System::Windows::Forms::MessageBox::Show("Commande modifié avec succès.", "Succès", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
    }
    else
    {
        System::Windows::Forms::MessageBox::Show("Aucun champ n'a été modifié.", "Information", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
    }
}

void Commande::supprimer()
{
	CLDataBase^ database = gcnew CLDataBase();
	// Vérifier si l'ID est valide
	if (!Ref_Existe(this->ref_commande))
	{
		System::Windows::Forms::MessageBox::Show("La Ref_commande de la commande n'est pas valide.", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return;  // Quitter la fonction en cas d'erreur
	}
	else
	{
		System::Data::DataSet^ dataSet = database->getDataSet("DELETE FROM Commande WHERE Ref_commande = " + "'" + this->ref_commande + "'");
	}
}

void Commande::setDateEmission(System::String^ date_emission)
{
	this->date_emission = date_emission;
}

void Commande::setDateLivraison(System::String^ date_livraison)
{
	this->date_livraison = date_livraison;
}

void Commande::setNumClient(int^ Num_client)
{
	this->num_client = Num_client;
}

void Commande::setRefCommande(System::String^ ref_commande)
{
	this->ref_commande = ref_commande;
}
